/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --posix-closure gtop

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'b':	goto yy3;
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
	case 'a':
		yyt1 = YYCURSOR;
		goto yy5;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	++YYCURSOR;
	yyt3 = NULL;
	yyt2 = YYCURSOR;
	yynmatch = 3;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[5] = yyt3;
	yypmatch[0] = YYCURSOR - 2;
	yypmatch[1] = YYCURSOR;
	{}
}

posix_captures/other/06_i_flex_syntax_posix_closure_gtop.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
