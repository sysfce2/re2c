/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:
	case 'b':
		yyt1 = yyt2 = YYCURSOR;
		goto yy2;
	default:	goto yy3;
	}
yy2:
	yynmatch = 2;
	yypmatch[0] = yyt2;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt1;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:
	case 'b':
		yyt1 = YYCURSOR;
		goto yy2;
	default:	goto yy4;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:
	case 'b':
		yyt1 = YYCURSOR;
		goto yy2;
	default:	goto yy4;
	}
}

posix_captures/nullsubexpr/07.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/nullsubexpr/07.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/nullsubexpr/07.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
