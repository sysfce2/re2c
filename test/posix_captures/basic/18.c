/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy5;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		goto yy6;
	}
yy5:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':	goto yy7;
	default:	goto yy6;
	}
yy6:
	yynmatch = 1;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	{}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy8;
	default:	goto yy4;
	}
yy8:
	++YYCURSOR;
	goto yy6;
}

posix_captures/basic/18.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
