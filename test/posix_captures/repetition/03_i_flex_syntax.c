/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *(YYMARKER = YYCURSOR);
	if (yych >= 0x01) {
		yyt2 = yyt3 = NULL;
		yyt1 = yyt4 = YYCURSOR;
		goto yy3;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	if (yych >= 0x01) {
		yyt7 = yyt8 = NULL;
		yyt5 = yyt6 = yyt9 = YYCURSOR;
		goto yy5;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy4;
	yyt12 = yyt13 = yyt16 = NULL;
	yyt10 = yyt11 = yyt14 = yyt15 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych >= 0x01) {
		yyt12 = yyt13 = NULL;
		yyt10 = yyt11 = yyt14 = YYCURSOR;
		goto yy8;
	}
	yyt15 = YYCURSOR;
yy7:
	yynmatch = 10;
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
	yypmatch[14] = yyt11;
	yypmatch[16] = yyt12;
	yypmatch[17] = yyt13;
	yypmatch[18] = yyt14;
	yypmatch[19] = yyt15;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt6;
	yypmatch[9] = yyt11;
	yypmatch[15] = YYCURSOR;
	{}
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt2 = yyt1;
		yyt3 = yyt15;
		yyt4 = yyt16;
		yyt5 = yyt16;
		yyt6 = yyt15;
		yyt7 = yyt16;
		yyt8 = yyt16;
		yyt9 = yyt15;
		yyt15 = YYCURSOR;
		goto yy7;
	}
	yyt9 = yyt10 = yyt12 = yyt13 = NULL;
	yyt2 = yyt8 = yyt11 = yyt14 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt2 = yyt1;
		yyt3 = yyt15;
		yyt4 = yyt16;
		yyt5 = yyt16;
		yyt6 = yyt15;
		yyt7 = yyt15;
		yyt15 = YYCURSOR;
		goto yy7;
	}
	++YYCURSOR;
	yyt3 = yyt15;
	yyt4 = yyt16;
	yyt5 = yyt16;
	yyt6 = yyt15;
	yyt7 = yyt15;
	yyt12 = yyt2;
	yyt2 = yyt1;
	yyt14 = yyt15 = NULL;
	yyt13 = YYCURSOR;
	goto yy7;
}

posix_captures/repetition/03_i_flex_syntax.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
