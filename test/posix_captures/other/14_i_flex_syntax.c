/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'y':
		yyt1 = yyt2 = YYCURSOR;
		goto yy3;
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
	yych = *++YYCURSOR;
	switch (yych) {
	case 'y':
		yyt2 = YYCURSOR;
		goto yy4;
	default:
		yyt3 = YYCURSOR;
		goto yy2;
	}
yy4:
	++YYCURSOR;
	yyt3 = YYCURSOR;
	goto yy2;
}

posix_captures/other/14_i_flex_syntax.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/14_i_flex_syntax.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/14_i_flex_syntax.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
