/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych >= 0x01) {
		yyt1 = YYCURSOR;
		yyt2 = NULL;
		goto yy1;
	}
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy1:
	yych = *++YYCURSOR;
	if (yych >= 0x01) goto yy3;
	yyt3 = YYCURSOR;
yy2:
	yynmatch = 4;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt1;
	yypmatch[5] = yyt2;
	yypmatch[7] = yyt3;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = YYCURSOR;
	yypmatch[4] = yyt2;
	if (yyt2 != NULL) yypmatch[4] -= 2;
	yypmatch[6] = yyt3;
	if (yyt3 != NULL) yypmatch[6] -= 1;
	{}
yy3:
	++YYCURSOR;
	yyt2 = YYCURSOR;
	yyt3 = NULL;
	goto yy2;
}

captures/posix/repetition/01.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
