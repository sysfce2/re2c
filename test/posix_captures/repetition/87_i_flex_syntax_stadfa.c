/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 32) YYFILL(32);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':	goto yy3;
	case 'b':	goto yy5;
	case 'c':	goto yy6;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy9;
	case 'c':	goto yy10;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		yyt2 = yyt1;
		yyt1 = yyt5;
		yyt3 = yyt4 = YYCURSOR;
		goto yy8;
	}
yy5:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy11;
	default:	goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy12;
	case 'c':	goto yy10;
	default:	goto yy4;
	}
yy7:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy13;
	case 'b':	goto yy14;
	case 'c':	goto yy15;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy8:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy9:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy12;
	case 'c':	goto yy17;
	default:	goto yy4;
	}
yy10:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy13;
	case 'b':	goto yy18;
	case 'c':	goto yy15;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy19;
	default:	goto yy4;
	}
yy12:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy20;
	default:	goto yy4;
	}
yy13:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy21;
	case 'b':	goto yy22;
	case 'c':	goto yy23;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy14:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy13;
	case 'b':	goto yy18;
	case 'c':	goto yy24;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy15:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy21;
	case 'b':	goto yy25;
	case 'c':	goto yy23;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy16:
	yych = *++YYCURSOR;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'd':	goto yy26;
	default:
		yyt4 = yyt3;
		yyt3 = yyt2;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy17:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy13;
	case 'b':	goto yy18;
	case 'c':	goto yy15;
	case 'd':	goto yy28;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy18:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy29;
	default:	goto yy4;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy12;
	case 'c':	goto yy10;
	default:	goto yy4;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy28;
	default:	goto yy4;
	}
yy21:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy30;
	case 'b':	goto yy31;
	case 'c':	goto yy32;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy22:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy21;
	case 'b':	goto yy25;
	case 'c':	goto yy33;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy23:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy30;
	case 'b':	goto yy34;
	case 'c':	goto yy32;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy24:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy21;
	case 'b':	goto yy25;
	case 'c':	goto yy23;
	case 'd':	goto yy35;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy25:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy36;
	default:	goto yy4;
	}
yy26:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy26;
	default:
		yyt4 = yyt3;
		yyt3 = yyt2;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy28:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt2;
	switch (yych) {
	case 'a':	goto yy13;
	case 'b':	goto yy18;
	case 'c':	goto yy15;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy35;
	default:	goto yy4;
	}
yy30:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy37;
	case 'b':	goto yy38;
	case 'c':	goto yy39;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy31:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy30;
	case 'b':	goto yy34;
	case 'c':	goto yy40;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy32:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy37;
	case 'b':	goto yy41;
	case 'c':	goto yy39;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy33:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy30;
	case 'b':	goto yy34;
	case 'c':	goto yy32;
	case 'd':	goto yy42;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy34:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy43;
	default:	goto yy4;
	}
yy35:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy21;
	case 'b':	goto yy25;
	case 'c':	goto yy23;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy42;
	default:	goto yy4;
	}
yy37:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy44;
	case 'b':	goto yy45;
	case 'c':	goto yy46;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy38:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy37;
	case 'b':	goto yy41;
	case 'c':	goto yy47;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy39:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy44;
	case 'b':	goto yy48;
	case 'c':	goto yy46;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy40:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy37;
	case 'b':	goto yy41;
	case 'c':	goto yy39;
	case 'd':	goto yy49;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy41:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy50;
	default:	goto yy4;
	}
yy42:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy30;
	case 'b':	goto yy34;
	case 'c':	goto yy32;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy49;
	default:	goto yy4;
	}
yy44:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy51;
	case 'b':	goto yy52;
	case 'c':	goto yy53;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy45:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy44;
	case 'b':	goto yy48;
	case 'c':	goto yy54;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy46:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy51;
	case 'b':	goto yy55;
	case 'c':	goto yy53;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy47:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy44;
	case 'b':	goto yy48;
	case 'c':	goto yy46;
	case 'd':	goto yy56;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy48:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy57;
	default:	goto yy4;
	}
yy49:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy37;
	case 'b':	goto yy41;
	case 'c':	goto yy39;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy56;
	default:	goto yy4;
	}
yy51:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy58;
	case 'b':	goto yy59;
	case 'c':	goto yy60;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy52:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy51;
	case 'b':	goto yy55;
	case 'c':	goto yy61;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy53:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy58;
	case 'b':	goto yy62;
	case 'c':	goto yy60;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy54:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy51;
	case 'b':	goto yy55;
	case 'c':	goto yy53;
	case 'd':	goto yy63;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy55:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy64;
	default:	goto yy4;
	}
yy56:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy44;
	case 'b':	goto yy48;
	case 'c':	goto yy46;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy63;
	default:	goto yy4;
	}
yy58:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy65;
	case 'b':	goto yy66;
	case 'c':	goto yy67;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy59:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy58;
	case 'b':	goto yy62;
	case 'c':	goto yy68;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy60:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy65;
	case 'b':	goto yy69;
	case 'c':	goto yy67;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy61:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy58;
	case 'b':	goto yy62;
	case 'c':	goto yy60;
	case 'd':	goto yy70;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy62:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy71;
	default:	goto yy4;
	}
yy63:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy51;
	case 'b':	goto yy55;
	case 'c':	goto yy53;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy70;
	default:	goto yy4;
	}
yy65:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'b':	goto yy72;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy66:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy65;
	case 'b':	goto yy69;
	case 'c':	goto yy73;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy67:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy68:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy65;
	case 'b':	goto yy69;
	case 'c':	goto yy67;
	case 'd':	goto yy74;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy69:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy75;
	default:	goto yy4;
	}
yy70:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy58;
	case 'b':	goto yy62;
	case 'c':	goto yy60;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy71:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy74;
	default:	goto yy4;
	}
yy72:
	yych = *++YYCURSOR;
	yyt5 = yyt2;
	switch (yych) {
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy73:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'd':	goto yy76;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy74:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy65;
	case 'b':	goto yy69;
	case 'c':	goto yy67;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
yy75:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy76;
	default:	goto yy4;
	}
yy76:
	yych = *++YYCURSOR;
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy8;
	}
}

posix_captures/repetition/87_i_flex_syntax_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
