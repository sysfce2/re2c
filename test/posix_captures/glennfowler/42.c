/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	if (yych >= 0x01) goto yy3;
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	if (yych >= 0x01) goto yy5;
	yyt2 = YYCURSOR;
yy4:
	yynmatch = 3;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[5] = YYCURSOR;
	{}
yy5:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt2 = YYCURSOR;
		goto yy4;
	}
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	if (yych <= 0x00) goto yy4;
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0x00) goto yy4;
	goto yy7;
}

posix_captures/glennfowler/42.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
