/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i


{
	YYCTYPE yych;
	{ /* init ... */ }
yyFillLabel0:
	yych = *YYCURSOR;
	if (yych >= 0x01) goto yy1;
	if (YYLIMIT <= YYCURSOR) {
		if (YYFILL() == 0) goto yyFillLabel0;
		goto yy2;
	}
yy1:
	++YYCURSOR;
	{ return ^; }
yy2:
	{ return $; }
}

