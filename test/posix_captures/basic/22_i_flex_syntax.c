/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'x':	goto yy3;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	yynmatch = 31;
	yypmatch[0] = yypmatch[2] = yypmatch[4] = yypmatch[6] = yypmatch[8] = yypmatch[10] = yypmatch[12] = yypmatch[14] = yypmatch[16] = yypmatch[18] = yypmatch[20] = yypmatch[22] = yypmatch[24] = yypmatch[26] = yypmatch[28] = yypmatch[30] = yypmatch[32] = yypmatch[34] = yypmatch[36] = yypmatch[38] = yypmatch[40] = yypmatch[42] = yypmatch[44] = yypmatch[46] = yypmatch[48] = yypmatch[50] = yypmatch[52] = yypmatch[54] = yypmatch[56] = yypmatch[58] = yypmatch[60] = YYCURSOR - 1;
	yypmatch[1] = yypmatch[3] = yypmatch[5] = yypmatch[7] = yypmatch[9] = yypmatch[11] = yypmatch[13] = yypmatch[15] = yypmatch[17] = yypmatch[19] = yypmatch[21] = yypmatch[23] = yypmatch[25] = yypmatch[27] = yypmatch[29] = yypmatch[31] = yypmatch[33] = yypmatch[35] = yypmatch[37] = yypmatch[39] = yypmatch[41] = yypmatch[43] = yypmatch[45] = yypmatch[47] = yypmatch[49] = yypmatch[51] = yypmatch[53] = yypmatch[55] = yypmatch[57] = yypmatch[59] = yypmatch[61] = YYCURSOR;
	{}
}

posix_captures/basic/22_i_flex_syntax.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
