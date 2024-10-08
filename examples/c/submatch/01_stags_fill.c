/* Generated by re2c */
#line 1 "c/submatch/01_stags_fill.re"
// re2c $INPUT -o $OUTPUT --tags
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <vector>

#define BUFSIZE 4095

struct Input {
    FILE *file;
    char buf[BUFSIZE + 1], *lim, *cur, *mar, *tok;
    // Intermediate tag variables must be part of the lexer state passed to YYFILL.
    // They don't correspond to tags and should be autogenerated by re2c.
    
#line 19 "c/submatch/01_stags_fill.c"
const char *yyt1;const char *yyt2;const char *yyt3;
#line 15 "c/submatch/01_stags_fill.re"

    bool eof;
};

struct SemVer { int major, minor, patch; };

static bool operator==(const SemVer &x, const SemVer &y) {
    return x.major == y.major && x.minor == y.minor && x.patch == y.patch;
}

static int s2n(const char *s, const char *e) { // pre-parsed string to number
    int n = 0;
    for (; s < e; ++s) n = n * 10 + (*s - '0');
    return n;
}

static int fill(Input &in) {
    if (in.eof) return 1;

    const size_t shift = in.tok - in.buf;
    const size_t used = in.lim - in.tok;

    // Error: lexeme too long. In real life could reallocate a larger buffer.
    if (shift < 1) return 2;

    // Shift buffer contents (discard everything up to the current token).
    memmove(in.buf, in.tok, used);
    in.lim -= shift;
    in.cur -= shift;
    in.mar -= shift;
    in.tok -= shift;
    // Tag variables need to be shifted like other input positions. The check
    // for non-NULL is only needed if some tags are nested inside of alternative
    // or repetition, so that they can have NULL value.
    
#line 57 "c/submatch/01_stags_fill.c"
if (in.yyt1) in.yyt1 -= shift;
if (in.yyt2) in.yyt2 -= shift;
if (in.yyt3) in.yyt3 -= shift;
#line 49 "c/submatch/01_stags_fill.re"


    // Fill free space at the end of buffer with new data from file.
    in.lim += fread(in.lim, 1, BUFSIZE - used, in.file);
    in.lim[0] = 0;
    in.eof = in.lim < in.buf + BUFSIZE;
    return 0;
}

static bool lex(Input &in, std::vector<SemVer> &vers) {
    // Final tag variables available in semantic action.
    
#line 74 "c/submatch/01_stags_fill.c"
const char *t1;
const char *t2;
const char *t3;
const char *t4;
#line 60 "c/submatch/01_stags_fill.re"


    for (;;) {
        in.tok = in.cur;
    
#line 85 "c/submatch/01_stags_fill.c"
{
	char yych;
yyFillLabel0:
	yych = *in.cur;
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
		case '9': goto yy3;
		default:
			if (in.lim <= in.cur) {
				if (fill(in) == 0) goto yyFillLabel0;
				goto yy11;
			}
			goto yy1;
	}
yy1:
	++in.cur;
yy2:
#line 85 "c/submatch/01_stags_fill.re"
	{ return false; }
#line 113 "c/submatch/01_stags_fill.c"
yy3:
	in.mar = ++in.cur;
yyFillLabel1:
	yych = *in.cur;
	switch (yych) {
		case '.': goto yy4;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy6;
		default:
			if (in.lim <= in.cur) {
				if (fill(in) == 0) goto yyFillLabel1;
			}
			goto yy2;
	}
yy4:
	++in.cur;
yyFillLabel2:
	yych = *in.cur;
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
			in.yyt1 = in.cur;
			goto yy7;
		default:
			if (in.lim <= in.cur) {
				if (fill(in) == 0) goto yyFillLabel2;
			}
			goto yy5;
	}
yy5:
	in.cur = in.mar;
	goto yy2;
yy6:
	++in.cur;
yyFillLabel3:
	yych = *in.cur;
	switch (yych) {
		case '.': goto yy4;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy6;
		default:
			if (in.lim <= in.cur) {
				if (fill(in) == 0) goto yyFillLabel3;
			}
			goto yy5;
	}
yy7:
	++in.cur;
yyFillLabel4:
	yych = *in.cur;
	switch (yych) {
		case '\n':
			in.yyt2 = in.cur;
			in.yyt3 = NULL;
			goto yy8;
		case '.':
			in.yyt2 = in.cur;
			goto yy9;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy7;
		default:
			if (in.lim <= in.cur) {
				if (fill(in) == 0) goto yyFillLabel4;
			}
			goto yy5;
	}
yy8:
	++in.cur;
	t2 = in.yyt1;
	t3 = in.yyt2;
	t4 = in.yyt3;
	t1 = in.yyt1;
	t1 -= 1;
#line 76 "c/submatch/01_stags_fill.re"
	{
            int major = s2n(in.tok, t1);
            int minor = s2n(t2, t3);
            int patch = t4 != NULL ? s2n(t4, in.cur - 1) : 0;
            SemVer ver = {major, minor, patch};
            vers.push_back(ver);
            continue;
        }
#line 228 "c/submatch/01_stags_fill.c"
yy9:
	++in.cur;
yyFillLabel5:
	yych = *in.cur;
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
			in.yyt3 = in.cur;
			goto yy10;
		default:
			if (in.lim <= in.cur) {
				if (fill(in) == 0) goto yyFillLabel5;
			}
			goto yy5;
	}
yy10:
	++in.cur;
yyFillLabel6:
	yych = *in.cur;
	switch (yych) {
		case '\n': goto yy8;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy10;
		default:
			if (in.lim <= in.cur) {
				if (fill(in) == 0) goto yyFillLabel6;
			}
			goto yy5;
	}
yy11:
#line 84 "c/submatch/01_stags_fill.re"
	{ return true; }
#line 277 "c/submatch/01_stags_fill.c"
}
#line 86 "c/submatch/01_stags_fill.re"
}
}

int main() {
    const char *fname = "input";
    const SemVer semver = {1, 22, 333};
    std::vector<SemVer> expect(BUFSIZE, semver), actual;

    // Prepare input file (make sure it exceeds buffer size).
    FILE *f = fopen(fname, "w");
    for (int i = 0; i < BUFSIZE; ++i) fprintf(f, "1.22.333\n");
    fclose(f);

    // Reopen input file for reading.
    f = fopen(fname, "r");

    // Initialize lexer state: all pointers are at the end of buffer.
    Input in;
    in.file = f;
    in.cur = in.mar = in.tok = in.lim = in.buf + BUFSIZE;
    
#line 301 "c/submatch/01_stags_fill.c"
in.yyt1 = in.lim;
in.yyt2 = in.lim;
in.yyt3 = in.lim;
#line 106 "c/submatch/01_stags_fill.re"

    in.eof = false;
    // Sentinel (at YYLIMIT pointer) is set to zero, which triggers YYFILL.
    *in.lim = 0;
  
    // Run the lexer and check results.
    assert(lex(in, actual) && expect == actual);

    // Cleanup: remove input file.
    fclose(f);
    remove(fname);
    return 0;
}
