/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = yyt2 = yyt5 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt3 = yyt5 = NULL;
		yyt1 = yyt2 = yyt4 = YYCURSOR;
		goto yy4;
	default:
		yyt3 = yyt5 = NULL;
		yyt1 = yyt2 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 4;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[4] = yyt5;
	yypmatch[5] = yyt3;
	yypmatch[6] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt4;
	yypmatch[7] = YYCURSOR;
	{}
yy3:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt4 = yyt5 = YYCURSOR;
		goto yy5;
	case 'b':
		yyt3 = NULL;
		yyt4 = YYCURSOR;
		goto yy7;
	default:
		yyt3 = yyt5 = NULL;
		yyt2 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy4:
	++YYCURSOR;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy8;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	yyt3 = yyt5 = NULL;
	yyt2 = yyt4 = YYCURSOR;
	goto yy2;
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':
		yyt3 = yyt4 = YYCURSOR;
		goto yy4;
	default:
		yyt2 = yyt4;
		yyt5 = yyt3;
		goto yy2;
	}
yy8:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt3 = yyt4 = YYCURSOR;
	switch (yych) {
	case 'b':	goto yy4;
	default:	goto yy2;
	}
}

posix_captures/glennfowler/17.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/17.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/17.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
