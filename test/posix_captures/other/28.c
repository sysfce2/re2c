/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = NULL;
		yyt1 = yyt2 = yyt9 = YYCURSOR;
		goto yy3;
	default:
		yyt2 = yyt3 = yyt4 = yyt6 = yyt7 = yyt8 = yyt9 = yyt10 = NULL;
		yyt1 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 7;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[6] = yyt9;
	yypmatch[7] = yyt4;
	yypmatch[8] = yyt5;
	yypmatch[10] = yyt6;
	yypmatch[11] = yyt7;
	yypmatch[12] = yyt8;
	yypmatch[13] = yyt10;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt5;
	yypmatch[9] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	yyt2 = yyt3 = yyt4 = yyt6 = yyt7 = yyt8 = yyt9 = yyt10 = NULL;
	yyt1 = yyt5 = YYCURSOR;
	goto yy2;
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt10 = YYCURSOR;
		goto yy6;
	default:
		yyt4 = yyt6 = yyt7 = yyt8 = yyt9 = yyt10 = NULL;
		yyt3 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt4 = yyt5 = yyt6 = YYCURSOR;
		goto yy7;
	default:
		yyt2 = yyt3;
		yyt6 = yyt7 = yyt8 = yyt10 = NULL;
		yyt4 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt7 = NULL;
		yyt2 = yyt8 = YYCURSOR;
		goto yy8;
	default:
		yyt2 = yyt10;
		yyt4 = yyt6 = yyt7 = yyt8 = yyt9 = yyt10 = NULL;
		yyt3 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy9;
	default:
		yyt2 = yyt3;
		yyt8 = yyt10 = NULL;
		yyt7 = YYCURSOR;
		goto yy2;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = yyt9 = YYCURSOR;
		goto yy10;
	default:
		yyt4 = yyt6 = yyt7 = yyt8 = yyt9 = yyt10 = NULL;
		yyt3 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:
		yyt2 = yyt10;
		yyt3 = yyt8;
		yyt4 = yyt7;
		yyt5 = yyt8;
		yyt6 = yyt7;
		yyt9 = yyt7;
		yyt10 = YYCURSOR;
		goto yy2;
	}
}

posix_captures/other/28.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/28.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/28.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
