/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':	goto yy3;
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
	case 'b':	goto yy5;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy6;
	default:	goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy7;
	default:	goto yy4;
	}
yy7:
	++YYCURSOR;
	yynmatch = 5;
	yypmatch[0] = YYCURSOR - 4;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR - 4;
	yypmatch[3] = YYCURSOR - 1;
	yypmatch[4] = YYCURSOR - 4;
	yypmatch[5] = YYCURSOR - 3;
	yypmatch[6] = YYCURSOR - 3;
	yypmatch[7] = YYCURSOR - 2;
	yypmatch[8] = YYCURSOR - 1;
	yypmatch[9] = YYCURSOR;
	{}
}

posix_captures/basic/54_i_flex_syntax_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
