/* Generated by re2c */
#line 1 "../../../benchmarks/c/src/re2c/submatch_36__rep_5_rep_3_rep_2.re"
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
    
#line 30 "gen/re2c/submatch_36__rep_5_rep_3_rep_2-eof-tdfa1.c"
#line 34 "../../../benchmarks/c/src/re2c/common.re"

    
#line 34 "gen/re2c/submatch_36__rep_5_rep_3_rep_2-eof-tdfa1.c"
taglist_t *yytm1;
taglist_t *yytm2;
taglist_t *yytm3;
taglist_t *yytm4;
taglist_t *yytm5;
taglist_t *yytm6;
taglist_t *yytm7;
#line 35 "../../../benchmarks/c/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 52 "gen/re2c/submatch_36__rep_5_rep_3_rep_2-eof-tdfa1.c"
in->yytm1 = 0;
in->yytm2 = 0;
in->yytm3 = 0;
in->yytm4 = 0;
in->yytm5 = 0;
in->yytm6 = 0;
in->yytm7 = 0;
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

#line 1 "../../../benchmarks/c/src/re2c/include-eof/fill.re"
#line 6 "../../../benchmarks/c/src/re2c/include-eof/fill.re"


static inline int fill(input_t *in)
{
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free > 0);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    
#line 117 "gen/re2c/submatch_36__rep_5_rep_3_rep_2-eof-tdfa1.c"
#line 21 "../../../benchmarks/c/src/re2c/include-eof/fill.re"


    in->lim += fread(in->lim, 1, free, stdin);
    in->lim[0] = 0;

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
    }

    return 0;
}

static inline void init_input(input_t *in)
{
    in->buf = (char*) malloc(SIZE + 1);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    
#line 139 "gen/re2c/submatch_36__rep_5_rep_3_rep_2-eof-tdfa1.c"
#line 40 "../../../benchmarks/c/src/re2c/include-eof/fill.re"

    
#line 143 "gen/re2c/submatch_36__rep_5_rep_3_rep_2-eof-tdfa1.c"
in->yytm1 = 0;
in->yytm2 = 0;
in->yytm3 = 0;
in->yytm4 = 0;
in->yytm5 = 0;
in->yytm6 = 0;
in->yytm7 = 0;
#line 41 "../../../benchmarks/c/src/re2c/include-eof/fill.re"

    taglistpool_init(&in->tlp);
    in->eof = 0;
    fill(in);
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
#line 1 "../../../benchmarks/c/src/re2c/submatch_36__rep_5_rep_3_rep_2.re"


static const char *print(Output *out, const char *tok, const char *start,
    const taglist_t *t)
{
    if (!t) return start;

    const char *s = print(out, tok, start, t->pred);
    if (t->dist > 0) {
        const char *e = tok + t->dist;
        outs(out, s, e);
        outc(out, '.');
        return e;
    } else {
        return s;
    }
}

static int lex(input_t *in, Output *out)
{
    taglist_t *t1 = NULL, *t2 = NULL, *t3 = NULL;

loop:
    in->tok = in->cur;

#line 217 "gen/re2c/submatch_36__rep_5_rep_3_rep_2-eof-tdfa1.c"
{
	char yych;
yyFillLabel0:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			taglist(&in->yytm4, in->tok, in->tok - 1, &in->tlp);
			in->yytm3 = in->yytm1;
			taglist(&in->yytm3, in->tok, in->tok - 1, &in->tlp);
			in->yytm2 = in->yytm6;
			taglist(&in->yytm2, in->tok, in->tok - 1, &in->tlp);
			goto yy3;
		case 'a':
			in->yytm3 = in->yytm1;
			taglist(&in->yytm3, in->tok, in->tok - 1, &in->tlp);
			in->yytm2 = in->yytm6;
			taglist(&in->yytm2, in->tok, in->tok - 1, &in->tlp);
			goto yy4;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel0;
				goto yy19;
			}
			goto yy1;
	}
yy1:
	++in->cur;
yy2:
#line 28 "../../../benchmarks/c/src/re2c/submatch_36__rep_5_rep_3_rep_2.re"
	{ return 1; }
#line 248 "gen/re2c/submatch_36__rep_5_rep_3_rep_2-eof-tdfa1.c"
yy3:
	++in->cur;
	t1 = in->yytm2;
	t2 = in->yytm3;
	t3 = in->yytm4;
#line 29 "../../../benchmarks/c/src/re2c/submatch_36__rep_5_rep_3_rep_2.re"
	{
        const char *p = in->tok;
        p = print(out, in->tok, p, t1);
        p = print(out, in->tok, p, t2);
        p = print(out, in->tok, p, t3);
        outc(out, '\n');
        taglistpool_clear(&in->tlp, in);
        goto loop;
    }
#line 264 "gen/re2c/submatch_36__rep_5_rep_3_rep_2-eof-tdfa1.c"
yy4:
	in->mar = ++in->cur;
yyFillLabel1:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy5;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel1;
			}
			goto yy2;
	}
yy5:
	++in->cur;
yyFillLabel2:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			taglist(&in->yytm4, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a':
			in->yytm7 = in->yytm4;
			taglist(&in->yytm7, in->tok, in->cur, &in->tlp);
			goto yy7;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel2;
			}
			goto yy6;
	}
yy6:
	in->cur = in->mar;
	goto yy2;
yy7:
	++in->cur;
yyFillLabel3:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			taglist(&in->yytm4, in->tok, in->tok - 1, &in->tlp);
			in->yytm3 = in->yytm1;
			taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a':
			in->yytm5 = in->yytm1;
			taglist(&in->yytm5, in->tok, in->cur, &in->tlp);
			goto yy8;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel3;
			}
			goto yy6;
	}
yy8:
	++in->cur;
yyFillLabel4:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yytm4 = in->yytm7;
			taglist(&in->yytm4, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a': goto yy9;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel4;
			}
			goto yy6;
	}
yy9:
	++in->cur;
yyFillLabel5:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			taglist(&in->yytm4, in->tok, in->tok - 1, &in->tlp);
			in->yytm3 = in->yytm1;
			taglist(&in->yytm3, in->tok, in->tok - 1, &in->tlp);
			in->yytm2 = in->yytm6;
			taglist(&in->yytm2, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a':
			in->yytm3 = in->yytm1;
			taglist(&in->yytm3, in->tok, in->tok - 1, &in->tlp);
			taglist(&in->yytm6, in->tok, in->cur, &in->tlp);
			goto yy10;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel5;
			}
			goto yy6;
	}
yy10:
	++in->cur;
yyFillLabel6:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			taglist(&in->yytm4, in->tok, in->tok - 1, &in->tlp);
			in->yytm3 = in->yytm5;
			taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a': goto yy11;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel6;
			}
			goto yy6;
	}
yy11:
	++in->cur;
yyFillLabel7:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yytm2 = in->yytm6;
			taglist(&in->yytm4, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a':
			in->yytm5 = in->yytm4;
			taglist(&in->yytm5, in->tok, in->cur, &in->tlp);
			goto yy12;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel7;
			}
			goto yy6;
	}
yy12:
	++in->cur;
yyFillLabel8:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yytm2 = in->yytm6;
			taglist(&in->yytm4, in->tok, in->tok - 1, &in->tlp);
			in->yytm3 = in->yytm1;
			taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a':
			in->yytm7 = in->yytm1;
			taglist(&in->yytm7, in->tok, in->cur, &in->tlp);
			goto yy13;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel8;
			}
			goto yy6;
	}
yy13:
	++in->cur;
yyFillLabel9:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yytm2 = in->yytm6;
			in->yytm4 = in->yytm5;
			taglist(&in->yytm4, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a': goto yy14;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel9;
			}
			goto yy6;
	}
yy14:
	++in->cur;
yyFillLabel10:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			taglist(&in->yytm4, in->tok, in->tok - 1, &in->tlp);
			in->yytm3 = in->yytm1;
			taglist(&in->yytm3, in->tok, in->tok - 1, &in->tlp);
			in->yytm2 = in->yytm6;
			taglist(&in->yytm2, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a':
			in->yytm3 = in->yytm1;
			taglist(&in->yytm3, in->tok, in->tok - 1, &in->tlp);
			in->yytm2 = in->yytm6;
			taglist(&in->yytm2, in->tok, in->cur, &in->tlp);
			goto yy15;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel10;
			}
			goto yy6;
	}
yy15:
	++in->cur;
yyFillLabel11:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yytm2 = in->yytm6;
			taglist(&in->yytm4, in->tok, in->tok - 1, &in->tlp);
			in->yytm3 = in->yytm7;
			taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a': goto yy16;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel11;
			}
			goto yy6;
	}
yy16:
	++in->cur;
yyFillLabel12:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			taglist(&in->yytm4, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a':
			in->yytm5 = in->yytm4;
			taglist(&in->yytm5, in->tok, in->cur, &in->tlp);
			goto yy17;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel12;
			}
			goto yy6;
	}
yy17:
	++in->cur;
yyFillLabel13:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			taglist(&in->yytm4, in->tok, in->tok - 1, &in->tlp);
			in->yytm3 = in->yytm1;
			taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a':
			in->yytm7 = in->yytm1;
			taglist(&in->yytm7, in->tok, in->cur, &in->tlp);
			goto yy18;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel13;
			}
			goto yy6;
	}
yy18:
	++in->cur;
yyFillLabel14:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yytm4 = in->yytm5;
			taglist(&in->yytm4, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a':
			in->yytm6 = in->yytm2;
			goto yy14;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel14;
			}
			goto yy6;
	}
yy19:
#line 5 "../../../benchmarks/c/src/re2c/include-eof/fill.re"
	{ return 0; }
#line 532 "gen/re2c/submatch_36__rep_5_rep_3_rep_2-eof-tdfa1.c"
}
#line 38 "../../../benchmarks/c/src/re2c/submatch_36__rep_5_rep_3_rep_2.re"

}
