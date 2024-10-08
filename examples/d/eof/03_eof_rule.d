/* Generated by re2d */
#line 1 "d/eof/03_eof_rule.re"
// re2d $INPUT -o $OUTPUT
module main;

// Expect a null-terminated string.
private int lex(immutable char[] s) {
    const(char)* yycursor = s.ptr, yylimit = s.ptr + s.length, yymarker;
    int count = 0;

    for (;;) {
    
#line 14 "d/eof/03_eof_rule.d"
{
    char yych;
    yych = *yycursor;
    switch (yych) {
        case ' ': goto yy3;
        case '\'': goto yy5;
        default:
            if (yylimit <= yycursor) goto yy10;
            goto yy1;
    }
yy1:
    ++yycursor;
yy2:
#line 17 "d/eof/03_eof_rule.re"
    { return -1; }
#line 30 "d/eof/03_eof_rule.d"
yy3:
    yych = *++yycursor;
    switch (yych) {
        case ' ': goto yy3;
        default: goto yy4;
    }
yy4:
#line 20 "d/eof/03_eof_rule.re"
    { continue; }
#line 40 "d/eof/03_eof_rule.d"
yy5:
    yych = *(yymarker = ++yycursor);
    if (yych >= 0x01) goto yy7;
    if (yylimit <= yycursor) goto yy2;
yy6:
    yych = *++yycursor;
yy7:
    switch (yych) {
        case '\'': goto yy8;
        case '\\': goto yy9;
        default:
            if (yylimit <= yycursor) goto yy11;
            goto yy6;
    }
yy8:
    ++yycursor;
#line 19 "d/eof/03_eof_rule.re"
    { ++count; continue; }
#line 59 "d/eof/03_eof_rule.d"
yy9:
    yych = *++yycursor;
    if (yych <= 0x00) {
        if (yylimit <= yycursor) goto yy11;
        goto yy6;
    }
    goto yy6;
yy10:
#line 18 "d/eof/03_eof_rule.re"
    { return count; }
#line 70 "d/eof/03_eof_rule.d"
yy11:
    yycursor = yymarker;
    goto yy2;
}
#line 21 "d/eof/03_eof_rule.re"

    }
    assert(0); // unreachable
}

void main() {
    assert(lex("") == 0);
    assert(lex("'qu\0tes' 'are' 'fine: \\'' ") == 3);
    assert(lex("'unterminated\\'") == -1);
}
