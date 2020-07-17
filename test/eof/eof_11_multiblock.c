/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i
#include <assert.h>
#include <string.h>

static int lex(const char *str, unsigned int &count)
{
    const char *YYCURSOR = str;
    const char *YYLIMIT  = YYCURSOR + strlen(str);
    count = 0;
    
loop:
    
{
	char yych;
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':
	case ' ':	goto yy4;
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy7;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (false) goto yyFillLabel0;
			goto yyeof2;
		}
		goto yy2;
	}
yy2:
	++YYCURSOR;
	{ return 1; }
yy4:
	++YYCURSOR;
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':
	case ' ':	goto yy4;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (false) goto yyFillLabel1;
		}
		goto yy6;
	}
yy6:
	{ goto loop; }
yy7:
	++YYCURSOR;
	YYCURSOR -= 1;
	{ goto word; }
yyeof2:
	{ return 0; }
}

word:
    
{
	char yych;
yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy13;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (false) goto yyFillLabel2;
			goto yyeof3;
		}
		goto yy11;
	}
yy11:
	++YYCURSOR;
yy12:
	{ return 2; }
yy13:
	++YYCURSOR;
yyFillLabel3:
	yych = *YYCURSOR;
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
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy14;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (false) goto yyFillLabel3;
		}
		goto yy12;
	}
yy14:
	++YYCURSOR;
yyFillLabel4:
	yych = *YYCURSOR;
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
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy14;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (false) goto yyFillLabel4;
		}
		goto yy16;
	}
yy16:
	{ ++count; goto loop; }
yyeof3:
	{ return 0; }
}

}

int main()
{
    unsigned int count;
    assert(lex("aa bb cc", count) == 0 && count == 3);
    assert(lex("aa 1b cc", count) == 1);
    assert(lex("aa b cc", count) == 2);
    return 0;
}
eof/eof_11_multiblock.re:25:19: warning: rule matches empty string [-Wmatch-empty-string]
