/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures --fixed-tags toplevel

// In POSIX mode grous capture non-empty string: the first iteration consumes
// all 'a's, and subsequent iterations are bypassed on the epsilon-transitions.
// It is a POSIX rule that there should be no optional empty repetitions.

// In leftmost mode groups capture empty string: the first iteration consumes
// all 'a's, but subsequent iterations aren't bypassed (by TNFA construction
// they have lower priority).


{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt1 = YYCURSOR;
			yyt2 = YYCURSOR;
			yyt3 = NULL;
			yyt4 = NULL;
			yyt5 = YYCURSOR;
			goto yy1;
		default:
			yyt1 = YYCURSOR;
			yyt3 = YYCURSOR;
			yyt5 = YYCURSOR;
			goto yy2;
	}
yy1:
	yynmatch = 4;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt5;
	yypmatch[5] = yyt2;
	yypmatch[6] = yyt3;
	yypmatch[7] = yyt4;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt2 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy1;
		default:
			yyt3 = YYCURSOR;
			goto yy3;
	}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt2 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy1;
		default:
			yyt3 = YYCURSOR;
			goto yy4;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt2 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy1;
		default:
			yyt3 = YYCURSOR;
			goto yy5;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt2 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy1;
		default:
			yyt3 = YYCURSOR;
			goto yy6;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt2 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy1;
		default:
			yyt3 = YYCURSOR;
			goto yy7;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt2 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy1;
		default:
			yyt3 = YYCURSOR;
			goto yy8;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt2 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy1;
		default:
			yyt3 = YYCURSOR;
			goto yy9;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt2 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy1;
		default:
			yyt3 = YYCURSOR;
			goto yy10;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt2 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy1;
		default:
			yyt3 = YYCURSOR;
			goto yy11;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt2 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy1;
		default:
			yyt3 = YYCURSOR;
			yyt5 = YYCURSOR;
			goto yy2;
	}
}

captures/closure3_posix.re:12:33: warning: rule matches empty string [-Wmatch-empty-string]
