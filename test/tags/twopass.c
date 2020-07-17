/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags
// need two passes in liveness analyses for chains of copy commands:
// same version may occur as both LHS and RHS, e.g. 'x = y; y = z;'


{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy4;
	case 'b':
		yyt1 = yyt2 = yyt3 = YYCURSOR;
		goto yy6;
	default:
		yyt2 = YYCURSOR;
		goto yy3;
	}
yy2:
	r = yyt1;
	s = yyt4;
	{}
yy3:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt4 = YYCURSOR;
		goto yy10;
	case 'b':
		yyt1 = yyt4 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = YYCURSOR;
		goto yy8;
	}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy13;
	default:	goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0:
		yyt1 = yyt4 = NULL;
		goto yy2;
	case 1:
		yyt1 = yyt2;
		yyt4 = YYCURSOR;
		goto yy2;
	case 2:
		goto yy7;
	case 3:
		yyt4 = YYCURSOR;
		goto yy2;
	default:
		yyt1 = yyt2;
		goto yy2;
	}
yy6:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt4 = YYCURSOR;
		goto yy10;
	case 'b':
		yyt1 = yyt4 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = YYCURSOR;
		goto yy8;
	}
yy7:
	p = yyt3;
	q = yyt1;
	y = yyt2;
	{}
yy8:
	yyaccept = 3;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = yyt1;
		yyt4 = YYCURSOR;
		goto yy10;
	case 'b':
		yyt2 = yyt1;
		yyt1 = yyt4 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = YYCURSOR;
		goto yy8;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy14;
	default:	goto yy5;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy14;
	case 'b':
		yyt2 = yyt1;
		yyt1 = yyt4 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = YYCURSOR;
		goto yy8;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy17;
	case 'b':
		yyt1 = NULL;
		yyt2 = YYCURSOR;
		goto yy18;
	default:
		yyt1 = NULL;
		yyt2 = YYCURSOR;
		goto yy15;
	}
yy14:
	yyaccept = 4;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy10;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = YYCURSOR;
		goto yy8;
	}
yy15:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	case 'b':	goto yy18;
	default:	goto yy15;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
		yyt3 = NULL;
		goto yy20;
	case 'b':
		yyt3 = NULL;
		yyt1 = yyt2 = YYCURSOR;
		goto yy18;
	default:
		yyt3 = NULL;
		yyt1 = yyt2 = YYCURSOR;
		goto yy15;
	}
yy18:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy18;
	default:	goto yy15;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy21;
	default:	goto yy5;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	case 'b':
		yyt1 = NULL;
		yyt2 = YYCURSOR;
		goto yy18;
	default:
		yyt1 = NULL;
		yyt2 = YYCURSOR;
		goto yy15;
	}
}

tags/twopass.re:8:29: warning: rule matches empty string [-Wmatch-empty-string]
tags/twopass.re:7:42: warning: tag 'p' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
tags/twopass.re:7:42: warning: tag 'q' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
tags/twopass.re:7:42: warning: tag 'y' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
tags/twopass.re:8:29: warning: tag 'r' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
tags/twopass.re:8:29: warning: tag 's' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
