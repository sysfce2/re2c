// Code generated by re2go, DO NOT EDIT.
//line "go/eof/02_bounds_checking.re":1
//go:generate re2go $INPUT -o $OUTPUT
package main

import "strings"

//line "go/eof/02_bounds_checking.go":9
const YYMAXFILL = 1
//line "go/eof/02_bounds_checking.re":6


// Expects YYMAXFILL-padded string.
func lex(str string) int {
	// Pad string with YYMAXFILL zeroes at the end.
	yyinput := str + strings.Repeat("\000", int(YYMAXFILL))

	yycursor := 0
	yylimit := len(yyinput)
	count := 0

	for { 
//line "go/eof/02_bounds_checking.go":24
{
	var yych byte
	if (yylimit <= yycursor) {
		return -1
	}
	yych = yyinput[yycursor]
	switch (yych) {
	case 0x00:
		goto yy1
	case ' ':
		goto yy3
	case '\'':
		goto yy5
	default:
		goto yy2
	}
yy1:
	yycursor += 1
//line "go/eof/02_bounds_checking.re":24
	{
			// Check that it is the sentinel, not some unexpected null.
			if yycursor - 1 == len(str) { return count } else { return -1 }
		}
//line "go/eof/02_bounds_checking.go":48
yy2:
	yycursor += 1
//line "go/eof/02_bounds_checking.re":30
	{ return -1 }
//line "go/eof/02_bounds_checking.go":53
yy3:
	yycursor += 1
	if (yylimit <= yycursor) {
		return -1
	}
	yych = yyinput[yycursor]
	switch (yych) {
	case ' ':
		goto yy3
	default:
		goto yy4
	}
yy4:
//line "go/eof/02_bounds_checking.re":29
	{ continue }
//line "go/eof/02_bounds_checking.go":69
yy5:
	yycursor += 1
	if (yylimit <= yycursor) {
		return -1
	}
	yych = yyinput[yycursor]
	switch (yych) {
	case '\'':
		goto yy6
	case '\\':
		goto yy7
	default:
		goto yy5
	}
yy6:
	yycursor += 1
//line "go/eof/02_bounds_checking.re":28
	{ count += 1; continue }
//line "go/eof/02_bounds_checking.go":88
yy7:
	yycursor += 1
	if (yylimit <= yycursor) {
		return -1
	}
	goto yy5
}
//line "go/eof/02_bounds_checking.re":31

	}
}

func main() {
	assert_eq := func(x, y int) { if x != y { panic("error") } }
	assert_eq(lex(""), 0)
	assert_eq(lex("'qu\000tes' 'are' 'fine: \\'' "), 3)
	assert_eq(lex("'unterminated\\'"), -1)
	assert_eq(lex("'unexpected \000 null\\'"), -1)
}
