/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	if (yych >= 0x01) goto yy3;
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt5 = yyt11 = NULL;
	yyt1 = yyt6 = yyt12 = YYCURSOR - 1;
	if (yych >= 0x01) goto yy5;
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt7 = yyt8 = NULL;
	yyt3 = yyt4 = yyt9 = YYCURSOR - 1;
	yyt5 = yyt6;
	if (yych >= 0x01) goto yy7;
	yyt10 = YYCURSOR;
	yyt6 = yyt4;
	yyt5 = yyt3;
	yyt4 = yyt12;
	yyt3 = yyt11;
yy6:
	yynmatch = 7;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[6] = yyt4;
	yypmatch[7] = yyt5;
	yypmatch[8] = yyt6;
	yypmatch[10] = yyt7;
	yypmatch[11] = yyt8;
	yypmatch[12] = yyt9;
	yypmatch[13] = yyt10;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt6;
	yypmatch[9] = YYCURSOR;
	{}
yy7:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt5 = yyt1;
	yyt3 = yyt7 = yyt8 = yyt12 = NULL;
	yyt4 = yyt9 = yyt11 = YYCURSOR - 1;
	if (yych <= 0x00) {
		yyt10 = YYCURSOR;
		yyt6 = yyt4;
		yyt5 = yyt3;
		yyt4 = yyt12;
		yyt3 = yyt11;
		goto yy6;
	}
	++YYCURSOR;
	yyt7 = yyt4;
	yyt2 = yyt6;
	yyt1 = yyt5;
	yyt9 = yyt10 = NULL;
	yyt8 = YYCURSOR;
	yyt6 = yyt4;
	yyt5 = yyt3;
	yyt4 = yyt12;
	yyt3 = yyt11;
	goto yy6;
}

posix_captures/repetition/09_i_flex_syntax_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
