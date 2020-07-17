/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures
// if two histories are both bottoms (default) for the given tag,
// they are uncomparable from this tag's point of view: decision
// should be relayed on less prioritized tags


{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = yyt5 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt2 = yyt5 = NULL;
		yyt1 = yyt3 = YYCURSOR;
		goto yy4;
	default:
		yyt2 = yyt3 = yyt4 = yyt5 = NULL;
		yyt1 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt5;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':
		yyt2 = yyt3 = YYCURSOR;
		goto yy4;
	default:
		yyt3 = yyt4 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy5;
	default:
		yyt4 = YYCURSOR;
		goto yy2;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':
		yyt3 = YYCURSOR;
		goto yy4;
	default:
		yyt4 = YYCURSOR;
		goto yy2;
	}
}

posix_captures/uncomparable_bottoms.re:7:25: warning: rule matches empty string [-Wmatch-empty-string]
