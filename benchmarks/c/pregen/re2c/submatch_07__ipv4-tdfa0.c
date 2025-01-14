/* Generated by re2c */
#line 1 "../../../benchmarks/c/src/re2c/submatch_07__ipv4.re"
#line 1 "../../../benchmarks/c/src/re2c/common.re"
#include <assert.h>
#include <stdlib.h>
#include "common.h"

#line 15 "../../../benchmarks/c/src/re2c/common.re"


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
    
#line 30 "gen/re2c/submatch_07__ipv4-tdfa0.c"
char *yyt1;
char *yyt2;
char *yyt3;
char *yyt4;
#line 34 "../../../benchmarks/c/src/re2c/common.re"

    
#line 38 "gen/re2c/submatch_07__ipv4-tdfa0.c"
#line 35 "../../../benchmarks/c/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 49 "gen/re2c/submatch_07__ipv4-tdfa0.c"
#line 43 "../../../benchmarks/c/src/re2c/common.re"

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

#line 1 "../../../benchmarks/c/src/re2c/include/fill.re"
#line 4 "../../../benchmarks/c/src/re2c/include/fill.re"


#line 93 "gen/re2c/submatch_07__ipv4-tdfa0.c"
#define YYMAXFILL 16
#line 6 "../../../benchmarks/c/src/re2c/include/fill.re"


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
    
#line 112 "gen/re2c/submatch_07__ipv4-tdfa0.c"
if (in->yyt1) in->yyt1 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt4) in->yyt4 -= free;
#line 21 "../../../benchmarks/c/src/re2c/include/fill.re"


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
    
#line 139 "gen/re2c/submatch_07__ipv4-tdfa0.c"
in->yyt1 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;
#line 41 "../../../benchmarks/c/src/re2c/include/fill.re"

    
#line 147 "gen/re2c/submatch_07__ipv4-tdfa0.c"
#line 42 "../../../benchmarks/c/src/re2c/include/fill.re"

    taglistpool_init(&in->tlp);
    in->eof = 0;
}
#line 81 "../../../benchmarks/c/src/re2c/common.re"


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
#line 1 "../../../benchmarks/c/src/re2c/submatch_07__ipv4.re"


static int lex(input_t *in, Output *out)
{
    const char *p1, *p2, *p3, *p4;

loop:
    in->tok = in->cur;

#line 197 "gen/re2c/submatch_07__ipv4-tdfa0.c"
{
	char yych;
	in->yyt1 = in->cur;
	if ((in->lim - in->cur) < 16) if (fill(in, 16) != 0) return 1;
	yych = *in->cur++;
	switch (yych) {
		case 0x00: goto yy1;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy4;
		default: goto yy2;
	}
yy1:
#line 3 "../../../benchmarks/c/src/re2c/include/fill.re"
	{ return 0; }
#line 220 "gen/re2c/submatch_07__ipv4-tdfa0.c"
yy2:
yy3:
#line 14 "../../../benchmarks/c/src/re2c/submatch_07__ipv4.re"
	{ return 1; }
#line 225 "gen/re2c/submatch_07__ipv4-tdfa0.c"
yy4:
	yych = *(in->mar = in->cur);
	switch (yych) {
		case '.':
			++in->cur;
			in->yyt2 = in->cur;
			goto yy5;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			goto yy7;
		default: goto yy3;
	}
yy5:
	yych = *in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			goto yy8;
		default: goto yy6;
	}
yy6:
	in->cur = in->mar;
	goto yy3;
yy7:
	yych = *in->cur;
	switch (yych) {
		case '.':
			++in->cur;
			in->yyt2 = in->cur;
			goto yy5;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			goto yy9;
		default: goto yy6;
	}
yy8:
	yych = *in->cur;
	switch (yych) {
		case '.':
			++in->cur;
			in->yyt3 = in->cur;
			goto yy10;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			goto yy11;
		default: goto yy6;
	}
yy9:
	yych = *in->cur;
	switch (yych) {
		case '.':
			++in->cur;
			in->yyt2 = in->cur;
			goto yy5;
		default: goto yy6;
	}
yy10:
	yych = *in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			goto yy12;
		default: goto yy6;
	}
yy11:
	yych = *in->cur;
	switch (yych) {
		case '.':
			++in->cur;
			in->yyt3 = in->cur;
			goto yy10;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			goto yy13;
		default: goto yy6;
	}
yy12:
	yych = *in->cur;
	switch (yych) {
		case '.':
			++in->cur;
			in->yyt4 = in->cur;
			goto yy14;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			goto yy15;
		default: goto yy6;
	}
yy13:
	yych = *in->cur;
	switch (yych) {
		case '.':
			++in->cur;
			in->yyt3 = in->cur;
			goto yy10;
		default: goto yy6;
	}
yy14:
	yych = *in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			goto yy16;
		default: goto yy6;
	}
yy15:
	yych = *in->cur;
	switch (yych) {
		case '.':
			++in->cur;
			in->yyt4 = in->cur;
			goto yy14;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			goto yy17;
		default: goto yy6;
	}
yy16:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			goto yy18;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			goto yy19;
		default: goto yy6;
	}
yy17:
	yych = *in->cur;
	switch (yych) {
		case '.':
			++in->cur;
			in->yyt4 = in->cur;
			goto yy14;
		default: goto yy6;
	}
yy18:
	p1 = in->yyt1;
	p2 = in->yyt2;
	p3 = in->yyt3;
	p4 = in->yyt4;
#line 15 "../../../benchmarks/c/src/re2c/submatch_07__ipv4.re"
	{
        outs(out, p1, p2 - 1);
        outc(out, ',');
        outs(out, p2, p3 - 1);
        outc(out, ',');
        outs(out, p3, p4 - 1);
        outc(out, ',');
        outs(out, p4, in->cur - 1);
        outc(out, '\n');
        goto loop;
    }
#line 470 "gen/re2c/submatch_07__ipv4-tdfa0.c"
yy19:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			goto yy18;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			goto yy20;
		default: goto yy6;
	}
yy20:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			goto yy18;
		default: goto yy6;
	}
}
#line 26 "../../../benchmarks/c/src/re2c/submatch_07__ipv4.re"

}