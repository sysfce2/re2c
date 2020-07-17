/* Generated by re2c */
#line 1 "conditions/condition_06.re"
// re2c $INPUT -o $OUTPUT -cs
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	BSIZE	8192

typedef struct Scanner
{
	FILE			*fp;
	unsigned char	*cur, *tok, *lim, *eof;
	unsigned char 	buffer[BSIZE];
} Scanner;

int fill(Scanner *s, int len)
{
	if (!len)
	{
		s->cur = s->tok = s->lim = s->buffer;
		s->eof = 0;
	}
	if (!s->eof)
	{
		int got, cnt = s->tok - s->buffer;

		if (cnt > 0)
		{
			memcpy(s->buffer, s->tok, s->lim - s->tok);
			s->tok -= cnt;
			s->cur -= cnt;
			s->lim -= cnt;
		}
		cnt = BSIZE - cnt;
		if ((got = fread(s->lim, 1, cnt, s->fp)) != cnt)
		{
			s->eof = &s->lim[got];
		}
		s->lim += got;
	}
	else if (s->cur + len > s->eof)
	{
		return 0; /* not enough input data */
	}
	return -1;
}

void fputl(const char *s, size_t len, FILE *stream)
{
	while(len-- > 0)
	{
		fputc(*s++, stream);
	}
}

#line 58 "conditions/condition_06.c"
enum YYCONDTYPE {
	EStateNormal,
	EStateComment,
	EStateSkiptoeol,
	EStateString,
};
#line 55 "conditions/condition_06.re"


void scan(Scanner *s)
{
	int cond = EStateNormal;
	
	fill(s, 0);

	for(;;)
	{
		s->tok = s->cur;

#line 78 "conditions/condition_06.c"
		{
			unsigned char yych;
			if (cond < 2) {
				if (cond < 1) {
					goto yyc_Normal;
				} else {
					goto yyc_Comment;
				}
			} else {
				if (cond < 3) {
					goto yyc_Skiptoeol;
				} else {
					goto yyc_String;
				}
			}
/* *********************************** */
yyc_Normal:
			if ((s->lim - s->cur) < 3) { if(fill(s, 3) >= 0) break; }
			yych = *s->cur;
			if (yych <= '.') {
				if (yych == '"') goto yy4;
			} else {
				if (yych <= '/') goto yy6;
				if (yych == '?') goto yy7;
			}
			++s->cur;
yy3:
#line 141 "conditions/condition_06.re"
			{
				fputc(*s->tok, stdout);
				continue;
			}
#line 111 "conditions/condition_06.c"
yy4:
			++s->cur;
#line 135 "conditions/condition_06.re"
			{
				fputc(*s->tok, stdout);
				state = EStateString;
				continue;
			}
#line 120 "conditions/condition_06.c"
yy6:
			yych = *++s->cur;
			if (yych == '*') goto yy8;
			if (yych == '/') goto yy10;
			goto yy3;
yy7:
			yych = *(s->tok = ++s->cur);
			if (yych == '?') goto yy12;
			goto yy3;
yy8:
			++s->cur;
#line 127 "conditions/condition_06.re"
			{
				goto yyc_Comment;
			}
#line 136 "conditions/condition_06.c"
yy10:
			++s->cur;
#line 131 "conditions/condition_06.re"
			{
				goto yyc_Skiptoeol;
			}
#line 143 "conditions/condition_06.c"
yy12:
			yych = *++s->cur;
			switch (yych) {
			case '!':	goto yy14;
			case '\'':	goto yy16;
			case '(':	goto yy18;
			case ')':	goto yy20;
			case '-':	goto yy22;
			case '/':	goto yy24;
			case '<':	goto yy26;
			case '=':	goto yy28;
			case '>':	goto yy30;
			default:	goto yy13;
			}
yy13:
			s->cur = s->tok;
			goto yy3;
yy14:
			++s->cur;
#line 117 "conditions/condition_06.re"
			{
				fputc('|', stdout);
				continue;
			}
#line 168 "conditions/condition_06.c"
yy16:
			++s->cur;
#line 112 "conditions/condition_06.re"
			{
				fputc('^', stdout);
				continue;
			}
#line 176 "conditions/condition_06.c"
yy18:
			++s->cur;
#line 82 "conditions/condition_06.re"
			{
				fputc('[', stdout);
				continue;
			}
#line 184 "conditions/condition_06.c"
yy20:
			++s->cur;
#line 87 "conditions/condition_06.re"
			{
				fputc(']', stdout);
				continue;
			}
#line 192 "conditions/condition_06.c"
yy22:
			++s->cur;
#line 122 "conditions/condition_06.re"
			{
				fputc('~', stdout);
				continue;
			}
#line 200 "conditions/condition_06.c"
yy24:
			++s->cur;
#line 107 "conditions/condition_06.re"
			{
				fputc('\\', stdout);
				continue;
			}
#line 208 "conditions/condition_06.c"
yy26:
			++s->cur;
#line 92 "conditions/condition_06.re"
			{
				fputc('{', stdout);
				continue;
			}
#line 216 "conditions/condition_06.c"
yy28:
			++s->cur;
#line 102 "conditions/condition_06.re"
			{
				fputc('#', stdout);
				continue;
			}
#line 224 "conditions/condition_06.c"
yy30:
			++s->cur;
#line 97 "conditions/condition_06.re"
			{
				fputc('}', stdout);
				continue;
			}
#line 232 "conditions/condition_06.c"
/* *********************************** */
yyc_Comment:
			if ((s->lim - s->cur) < 2) { if(fill(s, 2) >= 0) break; }
			yych = *s->cur;
			if (yych == '*') goto yy36;
			++s->cur;
yy35:
#line 150 "conditions/condition_06.re"
			{
				goto yyc_Comment;
			}
#line 244 "conditions/condition_06.c"
yy36:
			yych = *++s->cur;
			if (yych != '/') goto yy35;
			++s->cur;
#line 146 "conditions/condition_06.re"
			{
				continue;
			}
#line 253 "conditions/condition_06.c"
/* *********************************** */
yyc_Skiptoeol:
			if ((s->lim - s->cur) < 5) { if(fill(s, 5) >= 0) break; }
			yych = *s->cur;
			if (yych <= '>') {
				if (yych == '\n') goto yy43;
			} else {
				if (yych <= '?') goto yy45;
				if (yych == '\\') goto yy46;
			}
			++s->cur;
yy42:
#line 166 "conditions/condition_06.re"
			{
				goto yyc_Skiptoeol;
			}
#line 270 "conditions/condition_06.c"
yy43:
			++s->cur;
#line 162 "conditions/condition_06.re"
			{
				continue;
			}
#line 277 "conditions/condition_06.c"
yy45:
			yych = *(s->tok = ++s->cur);
			if (yych == '?') goto yy47;
			goto yy42;
yy46:
			yych = *(s->tok = ++s->cur);
			if (yych == '\n') goto yy49;
			if (yych == '\r') goto yy51;
			goto yy42;
yy47:
			yych = *++s->cur;
			if (yych == '/') goto yy52;
yy48:
			s->cur = s->tok;
			goto yy42;
yy49:
			++s->cur;
#line 158 "conditions/condition_06.re"
			{
				goto yyc_Skiptoeol;
			}
#line 299 "conditions/condition_06.c"
yy51:
			yych = *++s->cur;
			if (yych == '\n') goto yy49;
			goto yy48;
yy52:
			yych = *++s->cur;
			if (yych == '\n') goto yy53;
			if (yych == '\r') goto yy55;
			goto yy48;
yy53:
			++s->cur;
#line 154 "conditions/condition_06.re"
			{
				goto yyc_Skiptoeol;
			}
#line 315 "conditions/condition_06.c"
yy55:
			yych = *++s->cur;
			if (yych == '\n') goto yy53;
			goto yy48;
/* *********************************** */
yyc_String:
			if ((s->lim - s->cur) < 2) { if(fill(s, 2) >= 0) break; }
			yych = *s->cur;
			if (yych == '"') goto yy60;
			if (yych == '\\') goto yy62;
			++s->cur;
yy59:
#line 180 "conditions/condition_06.re"
			{
				fputc(*s->tok, stdout);
				continue;
			}
#line 333 "conditions/condition_06.c"
yy60:
			++s->cur;
#line 175 "conditions/condition_06.re"
			{
				fputc(*s->tok, stdout);
				continue;
			}
#line 341 "conditions/condition_06.c"
yy62:
			yych = *++s->cur;
			if (yych == '\n') goto yy59;
			++s->cur;
#line 170 "conditions/condition_06.re"
			{
				fputl((const char*)s->tok, 2, stdout);
				continue;
			}
#line 351 "conditions/condition_06.c"
		}
#line 184 "conditions/condition_06.re"

	}
}

int main(int argc, char **argv)
{
	Scanner in;
	char c;

	if (argc != 2)
	{
		fprintf(stderr, "%s <file>\n", argv[0]);
		return 1;;
	}

	memset((char*) &in, 0, sizeof(in));

	if (!strcmp(argv[1], "-"))
	{
		in.fp = stdin;
	}
	else if ((in.fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Cannot open file '%s'\n", argv[1]);
		return 1;
	}

	scan(&in);

	if (in.fp != stdin)
	{
		fclose(in.fp);
	}
	return 0;
}
