/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -ci

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
		case yyc0: goto yyc_0;
		case yycx: goto yyc_x;
		case yycy: goto yyc_y;
	}
/* *********************************** */
yyc_0:
	{ return NULL; }
/* *********************************** */
yyc_x:
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (YYFILL() == 0) goto yyFillLabel0;
				goto yy4;
			}
			goto yy2;
	}
yy2:
	++YYCURSOR;
	{ return "*"; }
yy3:
	++YYCURSOR;
	{ return "a"; }
yy4:
	{ return "$"; }
/* *********************************** */
yyc_y:
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy7;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (YYFILL() == 0) goto yyFillLabel1;
				goto yy8;
			}
			goto yy6;
	}
yy6:
	++YYCURSOR;
	{ return "*"; }
yy7:
	++YYCURSOR;
	{ return "a"; }
yy8:
	{ return "$y"; }
}
