/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = yyt3 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt1 = yyt3 = YYCURSOR;
		goto yy5;
	default:
		yyt2 = yyt3 = NULL;
		yyt1 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy3;
	case 'b':	goto yy7;
	default:
		yyt2 = yyt3;
		yyt3 = YYCURSOR;
		goto yy2;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt2 = yyt3 = NULL;
		yyt1 = YYCURSOR;
		goto yy2;
	} else {
		yyt3 = YYCURSOR;
		goto yy2;
	}
yy7:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt2 = yyt3;
		yyt3 = YYCURSOR;
		goto yy5;
	default:
		yyt2 = yyt3;
		yyt3 = YYCURSOR;
		goto yy2;
	}
}

posix_captures/glennfowler/25_i_flex_syntax.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/25_i_flex_syntax.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/25_i_flex_syntax.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
