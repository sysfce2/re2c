/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 31) YYFILL(31);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy2;
		case 'b':
			yyt1 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy3;
		case 'c':
			yyt1 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy5;
		case 'd':
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			yyt3 = YYCURSOR;
			yyt4 = NULL;
			goto yy6;
		default:
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			yyt3 = YYCURSOR;
			yyt4 = NULL;
			goto yy1;
	}
yy1:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt4;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy8;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy9;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy10;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy11;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
		case 0:
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			yyt3 = YYCURSOR;
			yyt4 = NULL;
			goto yy1;
		case 1:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
		case 2:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
		default:
			yyt4 = yyt3;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy5:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy8;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy12;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy10;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy7:
	switch (yych) {
		case 'd': goto yy6;
		default: goto yy1;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy13;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy14;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy15;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy9:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy8;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy12;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy16;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy10:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy13;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy17;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy15;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy5;
		default: goto yy4;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy18;
		default: goto yy4;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy19;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy20;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy21;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy14:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy13;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy17;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy22;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy15:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy19;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy23;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy21;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy16:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy13;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy17;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy15;
		case 'd': goto yy10;
		default:
			yyt4 = yyt3;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy24;
		default: goto yy4;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy10;
		default: goto yy4;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy25;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy26;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy27;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy20:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy19;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy23;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy28;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy21:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy25;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy29;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy27;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy22:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy19;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy23;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy21;
		case 'd': goto yy15;
		default:
			yyt4 = yyt3;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy30;
		default: goto yy4;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy15;
		default: goto yy4;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy31;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy32;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy33;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy26:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy25;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy29;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy34;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy27:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy31;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy35;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy33;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy28:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy25;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy29;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy27;
		case 'd': goto yy21;
		default:
			yyt4 = yyt3;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy36;
		default: goto yy4;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy21;
		default: goto yy4;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy37;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy38;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy39;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy32:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy31;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy35;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy40;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy33:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy37;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy41;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy39;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy34:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy31;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy35;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy33;
		case 'd': goto yy27;
		default:
			yyt4 = yyt3;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy42;
		default: goto yy4;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy27;
		default: goto yy4;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy43;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy44;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy45;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy38:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy37;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy41;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy46;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy39:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy43;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy47;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy45;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy40:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy37;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy41;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy39;
		case 'd': goto yy33;
		default:
			yyt4 = yyt3;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy48;
		default: goto yy4;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy33;
		default: goto yy4;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy49;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy50;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy51;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy44:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy43;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy47;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy52;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy45:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy49;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy53;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy51;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy46:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy43;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy47;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy45;
		case 'd': goto yy39;
		default:
			yyt4 = yyt3;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy54;
		default: goto yy4;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy39;
		default: goto yy4;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy55;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy56;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy57;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy50:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy49;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy53;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy58;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy51:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy55;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy59;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy57;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy52:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy49;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy53;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy51;
		case 'd': goto yy45;
		default:
			yyt4 = yyt3;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy53:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy60;
		default: goto yy4;
	}
yy54:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy45;
		default: goto yy4;
	}
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy57;
		case 'd':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy56:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy55;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy59;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy61;
		case 'd':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy57:
	yych = *++YYCURSOR;
	yyt4 = yyt2;
	yyt2 = YYCURSOR;
	yyt3 = YYCURSOR;
	goto yy7;
yy58:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy55;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy59;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy57;
		case 'd': goto yy51;
		default:
			yyt4 = yyt3;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy59:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy62;
		default: goto yy4;
	}
yy60:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy51;
		default: goto yy4;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy57;
		default:
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy57;
		default: goto yy4;
	}
}

captures/posix/repetition/73.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/repetition/73.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/repetition/73.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
