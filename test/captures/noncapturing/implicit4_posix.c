/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures


{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		default: goto yy2;
	}
yy4:
	++YYCURSOR;
	yynmatch = 2;
	yypmatch[0] = YYCURSOR - 2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR - 2;
	yypmatch[3] = YYCURSOR - 1;
	{}
}



{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy8;
		default: goto yy6;
	}
yy6:
	++YYCURSOR;
yy7:
	{}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'b': goto yy9;
		default: goto yy7;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy11;
		default: goto yy10;
	}
yy10:
	YYCURSOR = YYMARKER;
	goto yy7;
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy12;
		default: goto yy10;
	}
yy12:
	++YYCURSOR;
	yynmatch = 2;
	yypmatch[0] = YYCURSOR - 4;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR - 4;
	yypmatch[3] = YYCURSOR - 2;
	{}
}



{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy16;
		default: goto yy14;
	}
yy14:
	++YYCURSOR;
yy15:
	{}
yy16:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'b': goto yy17;
		default: goto yy15;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy19;
		default: goto yy18;
	}
yy18:
	YYCURSOR = YYMARKER;
	goto yy15;
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy20;
		default: goto yy18;
	}
yy20:
	++YYCURSOR;
	yynmatch = 4;
	yypmatch[0] = YYCURSOR - 4;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR - 4;
	yypmatch[3] = YYCURSOR - 2;
	yypmatch[4] = YYCURSOR - 3;
	yypmatch[5] = YYCURSOR - 2;
	yypmatch[6] = YYCURSOR - 1;
	yypmatch[7] = YYCURSOR;
	{}
}



{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
		case 'b': goto yy24;
		default: goto yy22;
	}
yy22:
	++YYCURSOR;
yy23:
	{}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
		case 'b': goto yy25;
		default: goto yy23;
	}
yy25:
	++YYCURSOR;
	yynmatch = 2;
	yypmatch[0] = YYCURSOR - 2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR - 2;
	yypmatch[3] = YYCURSOR - 1;
	{}
}



{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy29;
		case 'b': goto yy30;
		default: goto yy27;
	}
yy27:
	++YYCURSOR;
yy28:
	{}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = NULL;
			goto yy31;
		case 'b':
			yyt1 = NULL;
			goto yy33;
		default: goto yy28;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy31;
		case 'b':
			yyt1 = YYCURSOR;
			goto yy33;
		default: goto yy28;
	}
yy31:
	++YYCURSOR;
	yyt2 = NULL;
yy32:
	yynmatch = 4;
	yypmatch[5] = yyt1;
	yypmatch[7] = yyt2;
	yypmatch[0] = YYCURSOR - 2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR - 2;
	yypmatch[3] = YYCURSOR - 1;
	yypmatch[4] = yyt1;
	if (yyt1 != NULL) yypmatch[4] -= 1;
	yypmatch[6] = yyt2;
	if (yyt2 != NULL) yypmatch[6] -= 1;
	{}
yy33:
	++YYCURSOR;
	yyt2 = YYCURSOR;
	goto yy32;
}



{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy36;
		default:
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			yyt3 = NULL;
			goto yy35;
	}
yy35:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt3;
	yypmatch[3] = yyt2;
	yypmatch[1] = YYCURSOR;
	{}
yy36:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy37;
		default:
			yyt2 = YYCURSOR;
			goto yy35;
	}
yy37:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt3 = YYCURSOR;
			goto yy36;
		default:
			yyt2 = YYCURSOR;
			goto yy35;
	}
}



{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			yyt5 = YYCURSOR;
			goto yy40;
		default:
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			yyt3 = NULL;
			yyt4 = NULL;
			yyt5 = NULL;
			goto yy39;
	}
yy39:
	yynmatch = 4;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt5;
	yypmatch[3] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[7] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[4] = yyt3;
	if (yyt3 != NULL) yypmatch[4] -= 2;
	yypmatch[6] = yyt4;
	if (yyt4 != NULL) yypmatch[6] -= 2;
	{}
yy40:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy41;
		default:
			yyt2 = YYCURSOR;
			yyt3 = NULL;
			yyt4 = NULL;
			goto yy39;
	}
yy41:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt5 = YYCURSOR;
			goto yy40;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			yyt4 = NULL;
			goto yy39;
	}
}

captures/noncapturing/implicit4_posix.re:35:11: warning: rule matches empty string [-Wmatch-empty-string]
captures/noncapturing/implicit4_posix.re:40:11: warning: rule matches empty string [-Wmatch-empty-string]
