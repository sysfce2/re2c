/* Generated by re2c */
#line 1 "d/submatch/01_stags.re"
// re2d $INPUT -o $OUTPUT
module main;

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

private bool lex(const(char)* str, ref SemVer ver) {
    const(char)* yycursor = str, yymarker;

    // User-defined tag variables that are available in semantic action.
    const(char)* t1, t2, t3, t4, t5;

    // Autogenerated tag variables used by the lexer to track tag values.
    
#line 27 "d/submatch/01_stags.d"
const(char)* yyt1;
const(char)* yyt2;
const(char)* yyt3;
const(char)* yyt4;
#line 23 "d/submatch/01_stags.re"


    
#line 36 "d/submatch/01_stags.d"
{
	char yych;
	yych = *yycursor;
	switch (yych) {
		case '0': .. case '9':
			yyt1 = yycursor;
			goto yy3;
		default: goto yy1;
	}
yy1:
	++yycursor;
yy2:
#line 38 "d/submatch/01_stags.re"
	{ return false; }
#line 51 "d/submatch/01_stags.d"
yy3:
	yych = *(yymarker = ++yycursor);
	switch (yych) {
		case '.': goto yy4;
		case '0': .. case '9': goto yy6;
		default: goto yy2;
	}
yy4:
	yych = *++yycursor;
	switch (yych) {
		case '0': .. case '9':
			yyt2 = yycursor;
			goto yy7;
		default: goto yy5;
	}
yy5:
	yycursor = yymarker;
	goto yy2;
yy6:
	yych = *++yycursor;
	switch (yych) {
		case '.': goto yy4;
		case '0': .. case '9': goto yy6;
		default: goto yy5;
	}
yy7:
	yych = *++yycursor;
	switch (yych) {
		case 0x00:
			yyt3 = yycursor;
			yyt4 = null;
			goto yy8;
		case '.':
			yyt3 = yycursor;
			goto yy9;
		case '0': .. case '9': goto yy7;
		default: goto yy5;
	}
yy8:
	++yycursor;
	t1 = yyt1;
	t3 = yyt2;
	t4 = yyt3;
	t5 = yyt4;
	t2 = yyt2;
	t2 -= 1;
#line 32 "d/submatch/01_stags.re"
	{
            ver.major = s2n(t1, t2);
            ver.minor = s2n(t3, t4);
            ver.patch = t5 != null ? s2n(t5, yycursor - 1) : 0;
            return true;
        }
#line 105 "d/submatch/01_stags.d"
yy9:
	yych = *++yycursor;
	switch (yych) {
		case '0': .. case '9':
			yyt4 = yycursor;
			goto yy10;
		default: goto yy5;
	}
yy10:
	yych = *++yycursor;
	switch (yych) {
		case 0x00: goto yy8;
		case '0': .. case '9': goto yy10;
		default: goto yy5;
	}
}
#line 39 "d/submatch/01_stags.re"

}

void main() {
    SemVer v;
    assert(lex("23.34", v) && v.major == 23 && v.minor == 34 && v.patch == 0);
    assert(lex("1.2.999", v) && v.major == 1 && v.minor == 2 && v.patch == 999);
    assert(!lex("1.a", v));
}
