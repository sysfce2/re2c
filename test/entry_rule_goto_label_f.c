/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -cfi


yy0:
	{ /* init ... */ }
	goto yy1;
yy2:
	++YYCURSOR;
yy1:
	if (YYLIMIT <= YYCURSOR) {
		YYSETSTATE(0);
		YYFILL(1);
	}
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy3;
	}
yy3:
	YYSETSTATE(-1);
	{ return a; }


switch (YYGETSTATE()) {
	case 0: goto yyFillLabel0;
	default: goto yy0;
}


enum YYCONDTYPE {
	yyca,
	yycb
};


yy4:
	switch (YYGETCONDITION()) {
		case yyca: goto yyc_a;
		case yycb: goto yyc_b;
	}
/* *********************************** */
yyc_a:
	{ /* init a ... */ }
	goto yy5;
yy6:
	++YYCURSOR;
yy5:
	if (YYLIMIT <= YYCURSOR) {
		YYSETSTATE(1);
		YYFILL(1);
	}
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy6;
		default: goto yy7;
	}
yy7:
	YYSETSTATE(-1);
	{ return a; }
/* *********************************** */
yyc_b:
	{ /* init * ... */ }
	goto yy8;
yy9:
	++YYCURSOR;
yy8:
	if (YYLIMIT <= YYCURSOR) {
		YYSETSTATE(2);
		YYFILL(1);
	}
yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy9;
		default: goto yy10;
	}
yy10:
	YYSETSTATE(-1);
	{ return b; }


switch (YYGETSTATE()) {
	case 1: goto yyFillLabel1;
	case 2: goto yyFillLabel2;
	default: goto yy4;
}

entry_rule_goto_label_f.re:4:9: warning: rule matches empty string [-Wmatch-empty-string]
entry_rule_goto_label_f.re:12:13: warning: rule in condition 'a' matches empty string [-Wmatch-empty-string]
entry_rule_goto_label_f.re:13:13: warning: rule in condition 'b' matches empty string [-Wmatch-empty-string]