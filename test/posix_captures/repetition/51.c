/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'X':	goto yy3;
	default:	goto yy2;
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
	case 'Y':	goto yy7;
	default:	goto yy5;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		goto yy8;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':	goto yy9;
	default:	goto yy5;
	}
yy7:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt3 = yyt4 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy8;
	case 'Y':	goto yy9;
	default:	goto yy5;
	}
yy8:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy9:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt4;
	yyt3 = yyt4 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy8;
	case 'Y':	goto yy9;
	default:	goto yy5;
	}
}

posix_captures/repetition/51.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
