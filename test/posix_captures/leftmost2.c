/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt1 = yyt2 = NULL;
		goto yy5;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	yyt3 = NULL;
	yyt2 = YYCURSOR;
yy4:
	yynmatch = 4;
	yypmatch[2] = yypmatch[4] = yyt1;
	yypmatch[3] = yypmatch[5] = yyt2;
	yypmatch[6] = yyt3;
	yypmatch[7] = yyt3;
	yypmatch[0] = YYCURSOR - 1;
	yypmatch[1] = YYCURSOR;
	{}
yy5:
	++YYCURSOR;
	yyt3 = NULL;
	goto yy4;
}

posix_captures/leftmost2.re:4:7: warning: rule matches empty string [-Wmatch-empty-string]
