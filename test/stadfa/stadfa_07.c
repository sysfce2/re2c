/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy2;
	default:	goto yy3;
	}
yy2:
	t = yyt1;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':
		yyt1 = NULL;
		goto yy2;
	default:	goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy6;
	default:	goto yy3;
	}
yy6:
	{}
}

stadfa/stadfa_07.re:4:13: warning: rule matches empty string [-Wmatch-empty-string]
stadfa/stadfa_07.re:5:3: warning: rule matches empty string [-Wmatch-empty-string]
stadfa/stadfa_07.re:5:3: warning: unreachable rule (shadowed by rule at line 4) [-Wunreachable-rules]
