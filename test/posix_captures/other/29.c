/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	default:
		yyt4 = yyt5 = yyt6 = yyt7 = NULL;
		yyt1 = yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 4;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[5] = yyt5;
	yypmatch[6] = yyt6;
	yypmatch[7] = yyt7;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	yyt4 = yyt5 = yyt6 = yyt7 = NULL;
	yyt1 = yyt2 = yyt3 = YYCURSOR;
	goto yy2;
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy6;
	default:
		yyt4 = yyt5 = yyt6 = yyt7 = NULL;
		yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = yyt4 = YYCURSOR;
		goto yy7;
	default:
		yyt4 = yyt5 = yyt6 = yyt7 = NULL;
		yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt5 = yyt7 = NULL;
		yyt3 = yyt6 = YYCURSOR;
		goto yy8;
	default:
		yyt4 = yyt5 = yyt6 = yyt7 = NULL;
		yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy9;
	default:
		yyt6 = yyt7 = NULL;
		yyt3 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy10;
	default:
		yyt4 = yyt5 = yyt6 = yyt7 = NULL;
		yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:
		yyt2 = yyt3;
		yyt4 = yyt7;
		yyt3 = yyt7 = YYCURSOR;
		goto yy2;
	}
}

posix_captures/other/29.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/29.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/29.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
