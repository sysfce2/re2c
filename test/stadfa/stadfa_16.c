/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'b':	goto yy5;
	default:	goto yy3;
	}
yy2:
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy4;
	default:	goto yy6;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy4;
	default:	goto yy8;
	}
yy6:
	++YYCURSOR;
	yyt1 = NULL;
yy7:
	t = yyt1;
	{}
yy8:
	++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	goto yy7;
}

stadfa/stadfa_16.re:4:3: warning: rule matches empty string [-Wmatch-empty-string]
