/* Generated by re2c */
// rules block disables YYFILL


// use block has no YYFILL

{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
	{ xa }
yy4:
	++YYCURSOR;
	{ a }
}


// normal block still has YYFILL

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy10;
	default:	goto yy8;
	}
yy8:
	++YYCURSOR;
	{ xb }
yy10:
	++YYCURSOR;
	{ b }
}
