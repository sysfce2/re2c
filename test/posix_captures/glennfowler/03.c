/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy3;
	case 'b':	goto yy4;
	default:
		yyt2 = yyt5 = NULL;
		yyt1 = yyt3 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 6;
	yypmatch[4] = yyt1;
	yypmatch[6] = yyt4;
	yypmatch[8] = yyt5;
	yypmatch[9] = yyt2;
	yypmatch[10] = yyt3;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[7] = yyt3;
	yypmatch[11] = YYCURSOR;
	{}
yy3:
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt2 = yyt4 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy5;
	case 'b':	goto yy7;
	default:
		yyt2 = yyt5 = NULL;
		yyt3 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy4:
	++YYCURSOR;
	yyt2 = yyt5 = NULL;
	yyt1 = yyt3 = yyt4 = YYCURSOR - 1;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	yyt4 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'b':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	yyt2 = yyt5 = NULL;
	yyt3 = yyt4 = YYCURSOR;
	goto yy2;
yy7:
	yych = *++YYCURSOR;
	yyt1 = yyt2;
	switch (yych) {
	case 'b':	goto yy8;
	default:
		yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
yy8:
	++YYCURSOR;
	yyt1 = yyt2;
	yyt2 = yyt3 = YYCURSOR - 1;
	goto yy2;
}

posix_captures/glennfowler/03.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/03.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/03.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
