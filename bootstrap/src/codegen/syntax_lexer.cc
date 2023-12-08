/* Generated by re2c 3.0 */
#line 1 "../src/codegen/syntax_lexer.re"
#include <stdint.h>

#include "src/codegen/syntax.h"
#include "src/codegen/syntax_parser.h"
#include "src/msg/msg.h"
#include "src/util/string_utils.h"

#line 21 "../src/codegen/syntax_lexer.re"


namespace re2c {

int StxFile::lex_token(YYSTYPE* yylval) {
    const uint8_t* YYMARKER, *p;
    
#line 19 "src/codegen/syntax_lexer.cc"
const uint8_t* yyt1;
#line 27 "../src/codegen/syntax_lexer.re"


start:
    tok = cur;

#line 27 "src/codegen/syntax_lexer.cc"
{
	uint8_t yych;
	unsigned int yyaccept = 0;
	static const unsigned char yybm[] = {
		  0, 128, 128, 128, 128, 128, 128, 128, 
		128, 144,   0, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		144, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 192, 192, 128, 
		224, 224, 224, 224, 224, 224, 224, 224, 
		224, 224, 128, 128, 128, 128, 128, 128, 
		128, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 128, 128, 128, 128, 192, 
		128, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
	};
	yych = *cur;
	if (yybm[0+yych] & 16) {
		goto yy4;
	}
	if (yych <= '>') {
		if (yych <= ')') {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy1;
				if (yych <= 0x08) goto yy2;
				goto yy5;
			} else {
				if (yych == '"') goto yy6;
				if (yych <= '\'') goto yy2;
				goto yy7;
			}
		} else {
			if (yych <= '.') {
				if (yych <= '+') goto yy2;
				if (yych <= ',') goto yy7;
				if (yych <= '-') goto yy8;
				goto yy2;
			} else {
				if (yych <= '/') goto yy9;
				if (yych <= '9') goto yy10;
				if (yych <= ';') goto yy7;
				goto yy2;
			}
		}
	} else {
		if (yych <= '_') {
			if (yych <= '[') {
				if (yych <= '?') goto yy7;
				if (yych <= '@') goto yy2;
				if (yych <= 'Z') goto yy11;
				goto yy7;
			} else {
				if (yych == ']') goto yy7;
				if (yych <= '^') goto yy2;
				goto yy11;
			}
		} else {
			if (yych <= 'z') {
				if (yych <= '`') goto yy2;
				if (yych == 'c') goto yy14;
				goto yy11;
			} else {
				if (yych == '|') goto yy2;
				if (yych <= '}') goto yy7;
				goto yy2;
			}
		}
	}
yy1:
	++cur;
#line 32 "../src/codegen/syntax_lexer.re"
	{ return YYEOF; }
#line 121 "src/codegen/syntax_lexer.cc"
yy2:
	++cur;
yy3:
#line 61 "../src/codegen/syntax_lexer.re"
	{
        msg.error(tok_loc(), "unexpected character: '%c'", cur[-1]);
        return YYerror;
    }
#line 130 "src/codegen/syntax_lexer.cc"
yy4:
	yych = *++cur;
	if (yybm[0+yych] & 16) {
		goto yy4;
	}
#line 38 "../src/codegen/syntax_lexer.re"
	{ goto start; }
#line 138 "src/codegen/syntax_lexer.cc"
yy5:
	++cur;
#line 33 "../src/codegen/syntax_lexer.re"
	{
        ++loc.line;
        pos = cur;
        goto start;
    }
#line 147 "src/codegen/syntax_lexer.cc"
yy6:
	++cur;
#line 59 "../src/codegen/syntax_lexer.re"
	{ goto str; }
#line 152 "src/codegen/syntax_lexer.cc"
yy7:
	++cur;
#line 60 "../src/codegen/syntax_lexer.re"
	{ return cur[-1]; }
#line 157 "src/codegen/syntax_lexer.cc"
yy8:
	yych = *++cur;
	if (yybm[0+yych] & 32) {
		goto yy10;
	}
	goto yy3;
yy9:
	yyaccept = 0;
	yych = *(YYMARKER = ++cur);
	if (yych == '/') goto yy15;
	goto yy3;
yy10:
	yych = *++cur;
	if (yybm[0+yych] & 32) {
		goto yy10;
	}
#line 51 "../src/codegen/syntax_lexer.re"
	{
        if (s_to_i32_unsafe(tok, cur, yylval->num)) {
            return STX_NUMBER;
        } else {
            msg.error(tok_loc(), "configuration value overflow");
            return YYerror;
        }
    }
#line 183 "src/codegen/syntax_lexer.cc"
yy11:
	yyaccept = 1;
	yych = *(YYMARKER = ++cur);
yy12:
	if (yybm[0+yych] & 64) {
		goto yy11;
	}
	if (yych <= 0x1F) {
		if (yych == '\t') {
			yyt1 = cur;
			goto yy17;
		}
	} else {
		if (yych <= ' ') {
			yyt1 = cur;
			goto yy17;
		}
		if (yych == '=') {
			yyt1 = cur;
			goto yy18;
		}
	}
yy13:
#line 47 "../src/codegen/syntax_lexer.re"
	{
        yylval->str = newcstr(tok, cur, alc);
        return STX_NAME;
    }
#line 212 "src/codegen/syntax_lexer.cc"
yy14:
	yyaccept = 1;
	yych = *(YYMARKER = ++cur);
	if (yych == 'o') goto yy19;
	goto yy12;
yy15:
	yych = *++cur;
	if (yybm[0+yych] & 128) {
		goto yy15;
	}
	if (yych >= 0x01) goto yy5;
yy16:
	cur = YYMARKER;
	if (yyaccept == 0) {
		goto yy3;
	} else {
		goto yy13;
	}
yy17:
	yych = *++cur;
	if (yych <= 0x1F) {
		if (yych == '\t') goto yy17;
		goto yy16;
	} else {
		if (yych <= ' ') goto yy17;
		if (yych != '=') goto yy16;
	}
yy18:
	++cur;
	p = yyt1;
#line 43 "../src/codegen/syntax_lexer.re"
	{
        yylval->str = newcstr(tok, p, alc);
        return STX_CONF;
    }
#line 248 "src/codegen/syntax_lexer.cc"
yy19:
	yyaccept = 1;
	yych = *(YYMARKER = ++cur);
	if (yych != 'd') goto yy12;
	yyaccept = 1;
	yych = *(YYMARKER = ++cur);
	if (yych != 'e') goto yy12;
	yyaccept = 1;
	yych = *(YYMARKER = ++cur);
	if (yych != ':') goto yy12;
	yych = *++cur;
	if (yych <= '^') {
		if (yych <= '@') goto yy16;
		if (yych >= '[') goto yy16;
	} else {
		if (yych == '`') goto yy16;
		if (yych >= '{') goto yy16;
	}
yy20:
	yych = *++cur;
	if (yych <= '9') {
		if (yych <= ' ') {
			if (yych == '\t') {
				yyt1 = cur;
				goto yy21;
			}
			if (yych <= 0x1F) goto yy16;
			yyt1 = cur;
		} else {
			if (yych <= ',') goto yy16;
			if (yych == '/') goto yy16;
			goto yy20;
		}
	} else {
		if (yych <= 'Z') {
			if (yych == '=') {
				yyt1 = cur;
				goto yy22;
			}
			if (yych <= '@') goto yy16;
			goto yy20;
		} else {
			if (yych <= '_') {
				if (yych <= '^') goto yy16;
				goto yy20;
			} else {
				if (yych <= '`') goto yy16;
				if (yych <= 'z') goto yy20;
				goto yy16;
			}
		}
	}
yy21:
	yych = *++cur;
	if (yych <= 0x1F) {
		if (yych == '\t') goto yy21;
		goto yy16;
	} else {
		if (yych <= ' ') goto yy21;
		if (yych != '=') goto yy16;
	}
yy22:
	++cur;
	p = yyt1;
#line 39 "../src/codegen/syntax_lexer.re"
	{
        yylval->str = newcstr(tok, p, alc);
        return STX_CONF_CODE;
    }
#line 318 "src/codegen/syntax_lexer.cc"
}
#line 65 "../src/codegen/syntax_lexer.re"


str: 
#line 324 "src/codegen/syntax_lexer.cc"
{
	uint8_t yych;
	yych = *cur;
	if (yych <= '!') {
		if (yych <= 0x00) goto yy24;
		if (yych != '\n') goto yy26;
	} else {
		if (yych <= '"') goto yy27;
		if (yych == '\\') goto yy28;
		goto yy26;
	}
yy24:
	++cur;
yy25:
#line 84 "../src/codegen/syntax_lexer.re"
	{
        tok = cur - 1;
        msg.error(tok_loc(), "syntax error in string literal");
        return YYerror;
    }
#line 345 "src/codegen/syntax_lexer.cc"
yy26:
	++cur;
#line 78 "../src/codegen/syntax_lexer.re"
	{ tmp_str += static_cast<char>(cur[-1]); goto str; }
#line 350 "src/codegen/syntax_lexer.cc"
yy27:
	++cur;
#line 79 "../src/codegen/syntax_lexer.re"
	{
        yylval->str = copystr(tmp_str, alc);
        tmp_str.clear();
        return STX_STRING;
    }
#line 359 "src/codegen/syntax_lexer.cc"
yy28:
	yych = *(YYMARKER = ++cur);
	if (yych <= 'm') {
		if (yych <= '`') {
			if (yych <= '"') {
				if (yych <= '!') goto yy25;
			} else {
				if (yych == '\\') goto yy29;
				goto yy25;
			}
		} else {
			if (yych <= 'b') {
				if (yych <= 'a') goto yy30;
				goto yy31;
			} else {
				if (yych == 'f') goto yy32;
				goto yy25;
			}
		}
	} else {
		if (yych <= 't') {
			if (yych <= 'q') {
				if (yych <= 'n') goto yy33;
				goto yy25;
			} else {
				if (yych <= 'r') goto yy34;
				if (yych <= 's') goto yy25;
				goto yy35;
			}
		} else {
			if (yych <= 'v') {
				if (yych <= 'u') goto yy25;
				goto yy36;
			} else {
				if (yych == 'x') goto yy37;
				goto yy25;
			}
		}
	}
	++cur;
#line 69 "../src/codegen/syntax_lexer.re"
	{ tmp_str += '"'; goto str; }
#line 402 "src/codegen/syntax_lexer.cc"
yy29:
	++cur;
#line 68 "../src/codegen/syntax_lexer.re"
	{ tmp_str += '\\'; goto str; }
#line 407 "src/codegen/syntax_lexer.cc"
yy30:
	++cur;
#line 70 "../src/codegen/syntax_lexer.re"
	{ tmp_str += '\a'; goto str; }
#line 412 "src/codegen/syntax_lexer.cc"
yy31:
	++cur;
#line 71 "../src/codegen/syntax_lexer.re"
	{ tmp_str += '\b'; goto str; }
#line 417 "src/codegen/syntax_lexer.cc"
yy32:
	++cur;
#line 72 "../src/codegen/syntax_lexer.re"
	{ tmp_str += '\f'; goto str; }
#line 422 "src/codegen/syntax_lexer.cc"
yy33:
	++cur;
#line 73 "../src/codegen/syntax_lexer.re"
	{ tmp_str += '\n'; goto str; }
#line 427 "src/codegen/syntax_lexer.cc"
yy34:
	++cur;
#line 74 "../src/codegen/syntax_lexer.re"
	{ tmp_str += '\r'; goto str; }
#line 432 "src/codegen/syntax_lexer.cc"
yy35:
	++cur;
#line 75 "../src/codegen/syntax_lexer.re"
	{ tmp_str += '\t'; goto str; }
#line 437 "src/codegen/syntax_lexer.cc"
yy36:
	++cur;
#line 76 "../src/codegen/syntax_lexer.re"
	{ tmp_str += '\v'; goto str; }
#line 442 "src/codegen/syntax_lexer.cc"
yy37:
	yych = *++cur;
	if (yych <= '/') goto yy38;
	if (yych <= '9') goto yy39;
yy38:
	cur = YYMARKER;
	goto yy25;
yy39:
	yych = *++cur;
	if (yych <= '/') goto yy38;
	if (yych >= ':') goto yy38;
	++cur;
#line 77 "../src/codegen/syntax_lexer.re"
	{ tmp_str += static_cast<char>(unesc_hex(cur - 4, cur)); goto str; }
#line 457 "src/codegen/syntax_lexer.cc"
}
#line 89 "../src/codegen/syntax_lexer.re"

    return YYerror; // unreachable
}

} // namespace re2c