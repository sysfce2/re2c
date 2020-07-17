/* Generated by re2c */
#line 1 "c/eof/05_generic_api_eof_rule.re"
// re2c $INPUT -o $OUTPUT 
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// expect a string without terminating null
static int lex(const char *str, unsigned int len)
{
    const char *cur = str, *lim = str + len, *mar;
    int count = 0;

loop:
    
#line 17 "c/eof/05_generic_api_eof_rule.c"
{
	char yych;
	yych = cur < lim ? *cur : 0;
	switch (yych) {
	case ' ':	goto yy4;
	case '\'':	goto yy7;
	default:
		if (cur >= lim) goto yyeof1;
		goto yy2;
	}
yy2:
	++cur;
yy3:
#line 25 "c/eof/05_generic_api_eof_rule.re"
	{ return -1; }
#line 33 "c/eof/05_generic_api_eof_rule.c"
yy4:
	++cur;
	yych = cur < lim ? *cur : 0;
	switch (yych) {
	case ' ':	goto yy4;
	default:	goto yy6;
	}
yy6:
#line 28 "c/eof/05_generic_api_eof_rule.re"
	{ goto loop; }
#line 44 "c/eof/05_generic_api_eof_rule.c"
yy7:
	++cur;
	mar = cur;
	yych = cur < lim ? *cur : 0;
	if (yych >= 0x01) goto yy9;
	if (cur >= lim) goto yy3;
yy8:
	++cur;
	yych = cur < lim ? *cur : 0;
yy9:
	switch (yych) {
	case '\'':	goto yy10;
	case '\\':	goto yy12;
	default:
		if (cur >= lim) goto yy13;
		goto yy8;
	}
yy10:
	++cur;
#line 27 "c/eof/05_generic_api_eof_rule.re"
	{ ++count; goto loop; }
#line 66 "c/eof/05_generic_api_eof_rule.c"
yy12:
	++cur;
	yych = cur < lim ? *cur : 0;
	if (yych <= 0x00) {
		if (cur >= lim) goto yy13;
		goto yy8;
	}
	goto yy8;
yy13:
	cur = mar;
	goto yy3;
yyeof1:
#line 26 "c/eof/05_generic_api_eof_rule.re"
	{ return count; }
#line 81 "c/eof/05_generic_api_eof_rule.c"
}
#line 30 "c/eof/05_generic_api_eof_rule.re"

}

// make a copy of the string without terminating null
static void test(const char *str, unsigned int len, int res)
{
    char *s = (char*) malloc(len);
    memcpy(s, str, len);
    int r = lex(s, len);
    free(s);
    assert(r == res);
}

#define TEST(s, r) test(s, sizeof(s) - 1, r)
int main()
{
    TEST("", 0);
    TEST("'qu\0tes' 'are' 'fine: \\'' ", 3);
    TEST("'unterminated\\'", -1);
    return 0;
}
