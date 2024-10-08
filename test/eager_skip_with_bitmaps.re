// re2c $INPUT -o $OUTPUT --eager-skip -bi --tags

#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/time.h>
#include <stdint.h>
#include <inttypes.h>

#define PRE \
    int print_timing = argc == 2 && strcmp(argv[1], "-t") == 0 ? 1 : 0; \
    uint64_t start = getTimeMs();

#define POST \
    uint64_t stop = getTimeMs(); \
    if (print_timing) { \
        fprintf(stderr, "time (ms): %" PRIu64 "\n", stop - start); \
    }

static inline uint64_t getTimeMs()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_usec / 1000 + tv.tv_sec * 1000;
}

static const size_t SIZE = 4096 * 16;

typedef struct {
    char *buf;
    char *pos;
} Output;

static inline void init_output(Output *out)
{
    out->buf = (char*) malloc(SIZE);
    out->pos = out->buf;
}

static inline void free_output(Output *out)
{
    free(out->buf);
}

static inline void flush(Output *out)
{
    fwrite(out->buf, 1, out->pos - out->buf, stdout);
    out->pos = out->buf;
}

// define as macro to enforce inlining
#define outs(out, s, e) do {                 \
    long n = (e) - (s);                      \
    if ((out->pos - out->buf) + n >= SIZE) { \
        flush(out);                          \
    }                                        \
    memcpy(out->pos, s, n);                  \
    out->pos += n;                           \
} while (0)

// define as macro to enforce inlining
#define outc(out, c) do {                  \
    if (out->pos + 1 - out->buf >= SIZE) { \
        flush(out);                        \
    }                                      \
    *out->pos++ = c;                       \
} while (0)

// define as macro to enforce inlining
// first argument must be a string literal
#define OUT(s, p1, p2) do {          \
    const char *p = s;               \
    outs(out, p, p + sizeof(s) - 1); \
    outs(out, p1, p2);               \
    outc(out, '\n');                 \
} while (0)

/*!re2c
    re2c:api:style           = free-form;
    re2c:define:YYCTYPE      = char;
    re2c:define:YYCURSOR     = in->cur;
    re2c:define:YYMARKER     = in->mar;
    re2c:define:YYLIMIT      = in->lim;
    re2c:define:YYMTAGP      = "taglist(&@@, in->tok, in->cur, &in->tlp);";
    re2c:define:YYMTAGN      = "taglist(&@@, in->tok, in->tok - 1, &in->tlp);"; // negative distance -1
    re2c:define:YYSHIFTMTAG  = "@@{tag}->dist += @@{shift};";
    re2c:tags:expression     = "in->@@";
*/

typedef struct taglist_t {
    struct taglist_t *pred;
    long dist;
} taglist_t;

typedef struct taglistpool_t {
    taglist_t *head;
    taglist_t *next;
    taglist_t *last;
} taglistpool_t;

typedef struct {
    char *buf;
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    /*!stags:re2c format = "char *@@;\n"; */
    /*!mtags:re2c format = "taglist_t *@@;\n"; */
    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    /*!mtags:re2c format = "in->@@ = 0;\n"; */
}

static inline void taglistpool_init(taglistpool_t *tlp)
{
    static const unsigned size = 1024 * 1024;
    tlp->head = (taglist_t*)malloc(size * sizeof(taglist_t));
    tlp->next = tlp->head;
    tlp->last = tlp->head + size;
}

static inline void taglistpool_free(taglistpool_t *tlp)
{
    free(tlp->head);
    tlp->head = tlp->next = tlp->last = NULL;
}

static inline void taglist(taglist_t **ptl, const char *b, const char *t, taglistpool_t *tlp)
{
#ifdef GROW_MTAG_LIST
    if (tlp->next >= tlp->last) {
        const unsigned size = tlp->last - tlp->head;
        taglist_t *head = (taglist_t*)malloc(2 * size * sizeof(taglist_t));
        memcpy(head, tlp->head, size * sizeof(taglist_t));
        free(tlp->head);
        tlp->head = head;
        tlp->next = head + size;
        tlp->last = head + size * 2;
    }
#else
    assert(tlp->next < tlp->last);
#endif
    taglist_t *tl = tlp->next++;
    tl->pred = *ptl;
    tl->dist = t - b;
    *ptl = tl;
}

/*!rules:re2c
    re2c:define:YYFILL = "if (fill(in, @@) != 0) return 1;"; // error if YYFILL fails
    "\x00" { return 0; }
*/

/*!max:re2c*/

static inline int fill(input_t *in, size_t need)
{
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free >= need);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    /*!stags:re2c format = "if (in->@@) in->@@ -= free;\n"; */

    in->lim += fread(in->lim, 1, free, stdin);

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
        memset(in->lim, 0, YYMAXFILL);
        in->lim += YYMAXFILL;
    }

    return 0;
}

static inline void init_input(input_t *in)
{
    in->buf = (char*) malloc(SIZE + YYMAXFILL);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    /*!stags:re2c format = "in->@@ = 0;\n"; */
    /*!mtags:re2c format = "in->@@ = 0;\n"; */
    taglistpool_init(&in->tlp);
    in->eof = 0;
}

static inline void free_input(input_t *in)
{
    free(in->buf);
    taglistpool_free(&in->tlp);
}

static int lex(input_t *in, Output *out);

int main(int argc, char **argv)
{
    PRE;
    input_t in;
    Output out;

    init_input(&in);
    init_output(&out);

    switch (lex(&in, &out)) {
        case 0:  break;
        case 1:  fprintf(stderr, "*** %s: syntax error\n", argv[0]); break;
        case 2:  fprintf(stderr, "*** %s: yyfill error\n", argv[0]); break;
        default: fprintf(stderr, "*** %s: panic\n", argv[0]); break;
    }

    flush(&out);
    free_output(&out);
    free_input(&in);

    POST;
    return 0;
}

static int lex(input_t *in, Output *out)
{
    const char
        *a0, *a1,
        *b0, *b1;
loop:
    in->tok = in->cur;
/*!use:re2c
    * { return 1; }

    @a0 [a]* @b0 [a]{4}[b]*
    @a1 [a]* @b1 [a]{4}[b]*
    [\n] {
        outs(out, a0, b0); outc(out, '.'); outs(out, b0, a1); outc(out, '.');
        outs(out, a1, b1); outc(out, '.'); outs(out, b1, in->cur);
        goto loop;
    }
*/
}
