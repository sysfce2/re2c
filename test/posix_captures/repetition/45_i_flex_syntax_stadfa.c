/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *(YYMARKER = YYCURSOR);
	if (yych >= 0x01) goto yy3;
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt15 = yyt18 = NULL;
	yyt16 = yyt17 = yyt23 = YYCURSOR - 1;
	if (yych >= 0x01) goto yy5;
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	yyt22 = yyt18;
	yyt21 = yyt16;
	yyt20 = NULL;
	yyt8 = yyt19 = YYCURSOR - 1;
	yyt18 = yyt17;
	if (yych <= 0x00) goto yy4;
	yych = *++YYCURSOR;
	yyt25 = yyt8;
	yyt24 = yyt20;
	yyt7 = yyt20;
	yyt6 = yyt8;
	yyt5 = yyt19;
	yyt4 = yyt23;
	yyt3 = yyt15;
	yyt2 = yyt22;
	yyt9 = yyt16;
	yyt1 = yyt21;
	yyt12 = yyt13 = yyt19 = yyt20 = yyt23 = NULL;
	yyt8 = yyt10 = yyt11 = yyt14 = yyt15 = YYCURSOR - 1;
	yyt22 = yyt18;
	yyt21 = yyt16;
	if (yych >= 0x01) goto yy8;
	yyt15 = YYCURSOR;
	yyt9 = yyt25;
	yyt8 = yyt24;
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
	yyt25 = yyt8;
	yyt24 = yyt20;
	yyt7 = yyt20;
	yyt6 = yyt8;
	yyt5 = yyt19;
	yyt4 = yyt23;
	yyt3 = yyt15;
	yyt2 = yyt22;
	yyt1 = yyt21;
	yyt12 = yyt13 = NULL;
	yyt10 = yyt11 = yyt14 = YYCURSOR - 1;
	yyt20 = yyt8;
	yyt22 = yyt17;
	yyt21 = yyt9;
	if (yych <= 0x00) {
		yyt15 = YYCURSOR;
		yyt9 = yyt25;
		yyt8 = yyt24;
		goto yy7;
	}
	yych = *++YYCURSOR;
	yyt7 = yyt20;
	yyt20 = yyt8;
	yyt6 = yyt8;
	yyt18 = yyt19;
	yyt5 = yyt19;
	yyt16 = yyt23;
	yyt4 = yyt23;
	yyt3 = yyt15;
	yyt2 = yyt22;
	yyt1 = yyt21;
	yyt10 = yyt12 = yyt13 = yyt25 = NULL;
	yyt11 = yyt14 = yyt24 = YYCURSOR - 1;
	if (yych <= 0x00) {
		yyt15 = YYCURSOR;
		yyt9 = yyt25;
		yyt8 = yyt24;
		goto yy7;
	}
	++YYCURSOR;
	yyt12 = yyt11;
	yyt7 = yyt8;
	yyt6 = yyt20;
	yyt5 = yyt18;
	yyt4 = yyt16;
	yyt3 = yyt15;
	yyt2 = yyt17;
	yyt1 = yyt9;
	yyt14 = yyt15 = NULL;
	yyt13 = YYCURSOR;
	yyt9 = yyt25;
	yyt8 = yyt24;
	goto yy7;
}

posix_captures/repetition/45_i_flex_syntax_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
