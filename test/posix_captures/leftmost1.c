/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = yyt3 = YYCURSOR;
		goto yy3;
	default:
		yyt3 = yyt4 = yyt5 = NULL;
		yyt1 = yyt2 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 4;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[6] = yyt5;
	yypmatch[7] = yyt5;
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
	default:
		yyt5 = NULL;
		yyt2 = yyt4 = YYCURSOR;
		goto yy2;
	}
}

posix_captures/leftmost1.re:3:23: warning: rule matches empty string [-Wmatch-empty-string]
