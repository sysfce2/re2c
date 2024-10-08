/* Generated by re2d */
#line 1 "d/fill/01_fill.re"
// re2d $INPUT -o $OUTPUT
module main;

import core.stdc.string;
import core.stdc.stdio;

enum BUFSIZE = 4095;

struct Input {
    FILE* file;
    char[BUFSIZE + 1] buffer;// +1 for sentinel
    char* yylimit, yycursor, yymarker, token;
    bool eof;
};

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

    // Fill free space at the end of buffer with new data from file.
    it.yylimit += fread(it.yylimit, 1, BUFSIZE - used, it.file);
    it.yylimit[0] = 0;
    it.eof = it.yylimit < (it.buffer.ptr + BUFSIZE);
    return 0;
}

private int lex(ref Input yyrecord) {
    int count = 0;
    for (;;) {
        yyrecord.token = yyrecord.yycursor;
    
#line 47 "d/fill/01_fill.d"
{
    char yych;
yyFillLabel0:
    yych = *yyrecord.yycursor;
    switch (yych) {
        case ' ': goto yy3;
        case '\'': goto yy5;
        default:
            if (yyrecord.yylimit <= yyrecord.yycursor) {
                if (fill(yyrecord) == 0) goto yyFillLabel0;
                goto yy10;
            }
            goto yy1;
    }
yy1:
    ++yyrecord.yycursor;
yy2:
#line 51 "d/fill/01_fill.re"
    { return -1; }
#line 67 "d/fill/01_fill.d"
yy3:
    ++yyrecord.yycursor;
yyFillLabel1:
    yych = *yyrecord.yycursor;
    switch (yych) {
        case ' ': goto yy3;
        default:
            if (yyrecord.yylimit <= yyrecord.yycursor) {
                if (fill(yyrecord) == 0) goto yyFillLabel1;
            }
            goto yy4;
    }
yy4:
#line 54 "d/fill/01_fill.re"
    { continue; }
#line 83 "d/fill/01_fill.d"
yy5:
    ++yyrecord.yycursor;
    yyrecord.yymarker = yyrecord.yycursor;
yyFillLabel2:
    yych = *yyrecord.yycursor;
    if (yych >= 0x01) goto yy7;
    if (yyrecord.yylimit <= yyrecord.yycursor) {
        if (fill(yyrecord) == 0) goto yyFillLabel2;
        goto yy2;
    }
yy6:
    ++yyrecord.yycursor;
yyFillLabel3:
    yych = *yyrecord.yycursor;
yy7:
    switch (yych) {
        case '\'': goto yy8;
        case '\\': goto yy9;
        default:
            if (yyrecord.yylimit <= yyrecord.yycursor) {
                if (fill(yyrecord) == 0) goto yyFillLabel3;
                goto yy11;
            }
            goto yy6;
    }
yy8:
    ++yyrecord.yycursor;
#line 53 "d/fill/01_fill.re"
    { ++count; continue; }
#line 113 "d/fill/01_fill.d"
yy9:
    ++yyrecord.yycursor;
yyFillLabel4:
    yych = *yyrecord.yycursor;
    if (yych <= 0x00) {
        if (yyrecord.yylimit <= yyrecord.yycursor) {
            if (fill(yyrecord) == 0) goto yyFillLabel4;
            goto yy11;
        }
        goto yy6;
    }
    goto yy6;
yy10:
#line 52 "d/fill/01_fill.re"
    { return count; }
#line 129 "d/fill/01_fill.d"
yy11:
    yyrecord.yycursor = yyrecord.yymarker;
    goto yy2;
}
#line 55 "d/fill/01_fill.re"

    }
    assert(0);
}

void main() {
    const char[] fname = "input";
    const char[] content = "'qu\0tes' 'are' 'fine: \\'' ";

    // Prepare input file: a few times the size of the buffer, containing
    // strings with zeroes and escaped quotes.
    FILE* f = fopen(fname.ptr, "w");
    for (int i = 0; i < BUFSIZE; ++i) {
        fwrite(cast(const(void*)) content.ptr, 1, content.length - 1, f);
    }
    fclose(f);
    int count = 3 * BUFSIZE; // number of quoted strings written to file

    // Initialize lexer state: all pointers are at the end of buffer.
    Input it;
    it.file = fopen(fname.ptr, "r");
    it.yycursor = it.yymarker = it.token = it.yylimit = it.buffer.ptr + BUFSIZE;
    it.eof = 0;
    // Sentinel (at YYLIMIT pointer) is set to zero, which triggers YYFILL.
    it.yylimit[0] = 0;

    // Run the lexer.
    assert(lex(it) == count);

    // Cleanup: remove input file.
    fclose(it.file);
    remove(fname.ptr);
}
