/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy2;
	case 'c':	goto yy5;
	default:	goto yy3;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'c':	goto yy9;
	default:	goto yy7;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:
		yyt2 = YYCURSOR;
		goto yy6;
	case 'c':	goto yy9;
	default:	goto yy11;
	}
yy6:
	yynmatch = 3;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2 - 1;
	yypmatch[5] = YYCURSOR;
	{}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'c':	goto yy9;
	default:	goto yy7;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:
		yyt2 = YYCURSOR;
		goto yy6;
	case 'c':	goto yy9;
	default:	goto yy11;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy6;
	case 'c':	goto yy9;
	default:	goto yy12;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy6;
	case 'c':	goto yy9;
	default:	goto yy12;
	}
}

posix_captures/basic/56_i_flex_syntax_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
