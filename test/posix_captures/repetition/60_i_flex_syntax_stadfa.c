/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 10) YYFILL(10);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'X':	goto yy3;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':	goto yy6;
	default:	goto yy5;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		goto yy7;
	}
yy5:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':	goto yy9;
	default:	goto yy8;
	}
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt4;
	yyt2 = yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':	goto yy9;
	default:	goto yy8;
	}
yy7:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy8:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':	goto yy11;
	default:	goto yy10;
	}
yy9:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt1 = yyt4;
	yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':	goto yy11;
	default:	goto yy10;
	}
yy10:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':	goto yy13;
	default:	goto yy12;
	}
yy11:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt1 = yyt4;
	yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':	goto yy13;
	default:	goto yy12;
	}
yy12:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':	goto yy15;
	default:	goto yy14;
	}
yy13:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt1 = yyt4;
	yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':	goto yy15;
	default:	goto yy14;
	}
yy14:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':	goto yy17;
	default:	goto yy16;
	}
yy15:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt1 = yyt4;
	yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':	goto yy17;
	default:	goto yy16;
	}
yy16:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':	goto yy19;
	default:	goto yy18;
	}
yy17:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt1 = yyt4;
	yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':	goto yy19;
	default:	goto yy18;
	}
yy18:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':	goto yy21;
	default:	goto yy20;
	}
yy19:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt1 = yyt4;
	yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':	goto yy21;
	default:	goto yy20;
	}
yy20:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'Y':	goto yy22;
	default:	goto yy4;
	}
yy21:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt1 = yyt4;
	yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'Y':	goto yy22;
	default:	goto yy7;
	}
yy22:
	++YYCURSOR;
	yyt2 = yyt5;
	yyt1 = yyt4;
	yyt3 = YYCURSOR - 1;
	goto yy7;
}

posix_captures/repetition/60_i_flex_syntax_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
