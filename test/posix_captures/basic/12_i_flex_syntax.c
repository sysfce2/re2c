/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = yyt2 = NULL;
		yyt3 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy5;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':
		yyt3 = YYCURSOR;
		goto yy6;
	case 'c':
		yyt2 = YYCURSOR;
		goto yy8;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':
		yyt2 = YYCURSOR;
		goto yy8;
	default:	goto yy4;
	}
yy6:
	++YYCURSOR;
	yyt4 = YYCURSOR;
yy7:
	yynmatch = 3;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[0] = YYCURSOR - 2;
	yypmatch[1] = YYCURSOR;
	{}
yy8:
	++YYCURSOR;
	yyt1 = yyt3;
	yyt3 = yyt4 = NULL;
	goto yy7;
}

posix_captures/basic/12_i_flex_syntax.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
