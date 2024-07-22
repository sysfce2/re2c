// Code generated by re2go, DO NOT EDIT.
//line "go/submatch/03_posix.re":1
//go:generate re2go $INPUT -o $OUTPUT
package main

import "reflect"

// Maximum number of capturing groups among all rules.
//line "go/submatch/03_posix.go":10
const YYMAXNMATCH = 4
//line "go/submatch/03_posix.re":7


type SemVer struct { major, minor, patch int }

func s2n(s string) int { // convert pre-parsed string to a number
	n := 0
	for _, c := range s { n = n*10 + int(c-'0') }
	return n
}

func parse(yyinput string) *SemVer {
	var yycursor, yymarker int

	// Allocate memory for capturing parentheses (twice the number of groups).
	yypmatch := make([]int, YYMAXNMATCH*2)
	var yynmatch int

	// Autogenerated tag variables used by the lexer to track tag values.
	
//line "go/submatch/03_posix.go":32
	var yyt1 int
	var yyt2 int
	var yyt3 int
	var yyt4 int
	var yyt5 int
//line "go/submatch/03_posix.re":25


	
//line "go/submatch/03_posix.go":42
{
	var yych byte
	yych = yyinput[yycursor]
	switch (yych) {
	case '0','1','2','3','4','5','6','7','8','9':
		yyt1 = yycursor
		goto yy3
	default:
		goto yy1
	}
yy1:
	yycursor += 1
yy2:
//line "go/submatch/03_posix.re":48
	{ return nil }
//line "go/submatch/03_posix.go":58
yy3:
	yycursor += 1
	yymarker = yycursor
	yych = yyinput[yycursor]
	switch (yych) {
	case '.':
		goto yy4
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy6
	default:
		goto yy2
	}
yy4:
	yycursor += 1
	yych = yyinput[yycursor]
	switch (yych) {
	case '0','1','2','3','4','5','6','7','8','9':
		yyt2 = yycursor
		goto yy7
	default:
		goto yy5
	}
yy5:
	yycursor = yymarker
	goto yy2
yy6:
	yycursor += 1
	yych = yyinput[yycursor]
	switch (yych) {
	case '.':
		goto yy4
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy6
	default:
		goto yy5
	}
yy7:
	yycursor += 1
	yych = yyinput[yycursor]
	switch (yych) {
	case 0x00:
		yyt3 = yycursor
		yyt4 = -1
		yyt5 = -1
		goto yy8
	case '.':
		yyt3 = yycursor
		yyt5 = yycursor
		goto yy9
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy7
	default:
		goto yy5
	}
yy8:
	yycursor += 1
	yynmatch = 4
	yypmatch[2] = yyt1
	yypmatch[4] = yyt2
	yypmatch[5] = yyt3
	yypmatch[6] = yyt5
	yypmatch[7] = yyt4
	yypmatch[0] = yyt1
	yypmatch[1] = yycursor
	yypmatch[3] = yyt2
	yypmatch[3] -= 1
//line "go/submatch/03_posix.re":35
	{
			// `yynmatch` is the number of capturing groups
			if yynmatch != 4 { panic("expected 4 submatch groups") }

			// Even `yypmatch` values are for opening parentheses, odd values
			// are for closing parentheses, the first group is the whole match.
			major := s2n(yyinput[yypmatch[2]:yypmatch[3]])
			minor := s2n(yyinput[yypmatch[4]:yypmatch[5]])
			patch := 0
			if yypmatch[6] != -1 { patch = s2n(yyinput[yypmatch[6]+1:yypmatch[7]]) }

			return &SemVer{major, minor, patch}
		}
//line "go/submatch/03_posix.go":139
yy9:
	yycursor += 1
	yych = yyinput[yycursor]
	if (yych <= 0x00) {
		goto yy5
	}
	goto yy11
yy10:
	yycursor += 1
	yych = yyinput[yycursor]
yy11:
	switch (yych) {
	case 0x00:
		yyt4 = yycursor
		goto yy8
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy10
	default:
		goto yy5
	}
}
//line "go/submatch/03_posix.re":49

}

func main() {
	assert_eq := func(x, y *SemVer) {
		if !reflect.DeepEqual(x, y) { panic("error") }
	}
	assert_eq(parse("23.34\000"), &SemVer{23, 34, 0})
	assert_eq(parse("1.2.9999\000"), &SemVer{1, 2, 9999})
	assert_eq(parse("1.a\000"), nil)
}
