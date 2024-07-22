/* Generated by re2d */
#line 1 "d/submatch/01_stags_fill.re"
// re2d $INPUT -o $OUTPUT --tags
module main;

import core.stdc.string;
import core.stdc.stdio;
import std.stdio;

enum BUFSIZE = 4095;

struct Input {
    FILE* file;
    char[BUFSIZE + 1] buffer;// +1 for sentinel
    char* yylimit, yycursor, yymarker, token;
    // Tag variables must be part of the lexer state passed to YYFILL.
    // They don't correspond to tags and should be autogenerated by re2c.
    
#line 20 "d/submatch/01_stags_fill.d"
char* yyt1;char* yyt2;char* yyt3;
#line 16 "d/submatch/01_stags_fill.re"

    bool eof;
};

struct SemVer {
    int major;
    int minor;
    int patch;
};

private int s2n(const(char)* s, const(char)* e) { // pre-parsed string to number
    int n = 0;
    for (; s < e; ++s) n = n * 10 + (*s - '0');
    return n;
}

private int fill(ref Input it) {
    if (it.eof) return 1;

    const size_t shift = it.token - it.buffer.ptr;
    const size_t used = it.yylimit - it.token;

    // Error: lexeme too long. In real life could reallocate a larger buffer.
    if (shift < 1) return 2;

    // Shift buffer contents (discard everything up to the current token).
    memmove(cast(void*)it.buffer.ptr, it.token, used);
    it.yylimit -= shift;
    it.yycursor -= shift;
    it.yymarker -= shift;
    it.token -= shift;
    // Tag variables need to be shifted like other input positions. The check
    // for non-null is only needed if some tags are nested inside of alternative
    // or repetition, so that they can have null value.
    
#line 58 "d/submatch/01_stags_fill.d"
if (it.yyt1) it.yyt1 -= shift;
if (it.yyt2) it.yyt2 -= shift;
if (it.yyt3) it.yyt3 -= shift;
#line 50 "d/submatch/01_stags_fill.re"


    // Fill free space at the end of buffer with new data from file.
    it.yylimit += fread(it.yylimit, 1, BUFSIZE - used, it.file);
    it.yylimit[0] = 0;
    it.eof = it.yylimit < (it.buffer.ptr + BUFSIZE);
    return 0;
}

private bool lex(ref Input yyrecord, ref SemVer[] vers) {
    // User-defined local variables that store final tag values.
    // They are different from tag variables autogenerated with `stags:re2c`,
    // as they are set at the end of match and used only in semantic actions.
    char* t1, t2, t3, t4;
    for (;;) {
        yyrecord.token = yyrecord.yycursor;
    
#line 80 "d/submatch/01_stags_fill.d"
{
	char yych;
yyFillLabel0:
	yych = *yyrecord.yycursor;
	switch (yych) {
		case '0': .. case '9': goto yy3;
		default:
			if (yyrecord.yylimit <= yyrecord.yycursor) {
				if (fill(yyrecord) == 0) goto yyFillLabel0;
				goto yy11;
			}
			goto yy1;
	}
yy1:
	++yyrecord.yycursor;
yy2:
#line 83 "d/submatch/01_stags_fill.re"
	{ return false; }
#line 99 "d/submatch/01_stags_fill.d"
yy3:
	++yyrecord.yycursor;
	yyrecord.yymarker = yyrecord.yycursor;
yyFillLabel1:
	yych = *yyrecord.yycursor;
	switch (yych) {
		case '.': goto yy4;
		case '0': .. case '9': goto yy6;
		default:
			if (yyrecord.yylimit <= yyrecord.yycursor) {
				if (fill(yyrecord) == 0) goto yyFillLabel1;
			}
			goto yy2;
	}
yy4:
	++yyrecord.yycursor;
yyFillLabel2:
	yych = *yyrecord.yycursor;
	switch (yych) {
		case '0': .. case '9':
			yyrecord.yyt1 = yyrecord.yycursor;
			goto yy7;
		default:
			if (yyrecord.yylimit <= yyrecord.yycursor) {
				if (fill(yyrecord) == 0) goto yyFillLabel2;
			}
			goto yy5;
	}
yy5:
	yyrecord.yycursor = yyrecord.yymarker;
	goto yy2;
yy6:
	++yyrecord.yycursor;
yyFillLabel3:
	yych = *yyrecord.yycursor;
	switch (yych) {
		case '.': goto yy4;
		case '0': .. case '9': goto yy6;
		default:
			if (yyrecord.yylimit <= yyrecord.yycursor) {
				if (fill(yyrecord) == 0) goto yyFillLabel3;
			}
			goto yy5;
	}
yy7:
	++yyrecord.yycursor;
yyFillLabel4:
	yych = *yyrecord.yycursor;
	switch (yych) {
		case '\n':
			yyrecord.yyt2 = yyrecord.yycursor;
			yyrecord.yyt3 = null;
			goto yy8;
		case '.':
			yyrecord.yyt2 = yyrecord.yycursor;
			goto yy9;
		case '0': .. case '9': goto yy7;
		default:
			if (yyrecord.yylimit <= yyrecord.yycursor) {
				if (fill(yyrecord) == 0) goto yyFillLabel4;
			}
			goto yy5;
	}
yy8:
	++yyrecord.yycursor;
	t2 = yyrecord.yyt1;
	t3 = yyrecord.yyt2;
	t4 = yyrecord.yyt3;
	t1 = yyrecord.yyt1;
	t1 -= 1;
#line 74 "d/submatch/01_stags_fill.re"
	{
            int major = s2n(yyrecord.token, t1);
            int minor = s2n(t2, t3);
            int patch = t4 != null ? s2n(t4, yyrecord.yycursor - 1) : 0;
            SemVer ver = SemVer(major, minor, patch);
            vers ~= ver;
            continue;
        }
#line 179 "d/submatch/01_stags_fill.d"
yy9:
	++yyrecord.yycursor;
yyFillLabel5:
	yych = *yyrecord.yycursor;
	switch (yych) {
		case '0': .. case '9':
			yyrecord.yyt3 = yyrecord.yycursor;
			goto yy10;
		default:
			if (yyrecord.yylimit <= yyrecord.yycursor) {
				if (fill(yyrecord) == 0) goto yyFillLabel5;
			}
			goto yy5;
	}
yy10:
	++yyrecord.yycursor;
yyFillLabel6:
	yych = *yyrecord.yycursor;
	switch (yych) {
		case '\n': goto yy8;
		case '0': .. case '9': goto yy10;
		default:
			if (yyrecord.yylimit <= yyrecord.yycursor) {
				if (fill(yyrecord) == 0) goto yyFillLabel6;
			}
			goto yy5;
	}
yy11:
#line 82 "d/submatch/01_stags_fill.re"
	{ return true; }
#line 210 "d/submatch/01_stags_fill.d"
}
#line 84 "d/submatch/01_stags_fill.re"

    }
    assert(0);
}

void main() {
    const char[] fname = "input";
    const char[] content = "1.22.333\n' ";

    SemVer[BUFSIZE] expect = SemVer(1, 22, 333);
    SemVer[] actual;

    // Prepare input file: a few times the size of the buffer, containing
    // strings with zeroes and escaped quotes.
    FILE* f = fopen(fname.ptr, "w");
    for (int i = 0; i < BUFSIZE; ++i) {
        fwrite(cast(const(void*)) content.ptr, 1, content.length - 2, f); // skip null-terminator
    }
    fclose(f);

    // Initialize lexer state: all pointers are at the end of buffer.
    Input it;
    it.file = fopen(fname.ptr, "r");
    it.yycursor = it.yymarker = it.token = it.yylimit = it.buffer.ptr + BUFSIZE;
    it.eof = 0;
    // Sentinel (at YYLIMIT pointer) is set to zero, which triggers YYFILL.
    it.yylimit[0] = 0;

    // Run the lexer.
    assert(lex(it, actual) && actual == expect);

    // Cleanup: remove input file.
    fclose(it.file);
    remove(fname.ptr);
}
