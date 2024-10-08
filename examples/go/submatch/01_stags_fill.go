// Code generated by re2go, DO NOT EDIT.
//line "go/submatch/01_stags_fill.re":1
//go:generate re2go $INPUT -o $OUTPUT --tags
package main

import (
	"os"
	"reflect"
	"strings"
)

const BUFSIZE int = 4095

type Input struct {
	file     *os.File
	yyinput  []byte
	yycursor int
	yymarker int
	yylimit  int
	token    int
	// Intermediate tag variables must be part of the lexer state passed to YYFILL.
	// They don't correspond to tags and should be autogenerated by re2c.
	
//line "go/submatch/01_stags_fill.go":25
	yyt1 int
	yyt2 int
	yyt3 int
//line "go/submatch/01_stags_fill.re":21

	eof      bool
}

type SemVer struct { major, minor, patch int }

func s2n(s []byte) int { // convert pre-parsed string to a number
	n := 0
	for _, c := range s { n = n*10 + int(c-'0') }
	return n
}

func fill(in *Input) int {
	if in.eof { return -1 } // unexpected EOF

	// Error: lexeme too long. In real life can reallocate a larger buffer.
	if in.token < 1 { return -2 }

	// Shift buffer contents (discard everything up to the current token).
	copy(in.yyinput[0:], in.yyinput[in.token:in.yylimit])
	in.yycursor -= in.token
	in.yymarker -= in.token
	in.yylimit -= in.token
	// Tag variables need to be shifted like other input positions. The check
	// for -1 is only needed if some tags are nested inside of alternative or
	// repetition, so that they can have -1 value.
	
//line "go/submatch/01_stags_fill.go":57
	if in.yyt1 != -1 { in.yyt1 -= in.token }
	if in.yyt2 != -1 { in.yyt2 -= in.token }
	if in.yyt3 != -1 { in.yyt3 -= in.token }
//line "go/submatch/01_stags_fill.re":47

	in.token = 0

	// Fill free space at the end of buffer with new data from file.
	n, _ := in.file.Read(in.yyinput[in.yylimit:BUFSIZE])
	in.yylimit += n
	in.yyinput[in.yylimit] = 0

	// If read less than expected, this is the end of input.
	in.eof = in.yylimit < BUFSIZE

	return 0
}

func parse(in *Input) []SemVer {
	// Final tag variables available in semantic action.
	
//line "go/submatch/01_stags_fill.go":79
var t1 int;var t2 int;var t3 int;var t4 int;
//line "go/submatch/01_stags_fill.re":63


	vers := make([]SemVer, 0)

	for {
		in.token = in.yycursor
	
//line "go/submatch/01_stags_fill.go":89
{
	var yych byte
yyFillLabel0:
	yych = in.yyinput[in.yycursor]
	switch (yych) {
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy3
	default:
		if (in.yylimit <= in.yycursor) {
			if (fill(in) == 0) {
				goto yyFillLabel0
			}
			goto yy11
		}
		goto yy1
	}
yy1:
	in.yycursor += 1
yy2:
//line "go/submatch/01_stags_fill.re":87
	{ return nil }
//line "go/submatch/01_stags_fill.go":111
yy3:
	in.yycursor += 1
	in.yymarker = in.yycursor
yyFillLabel1:
	yych = in.yyinput[in.yycursor]
	switch (yych) {
	case '.':
		goto yy4
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy6
	default:
		if (in.yylimit <= in.yycursor) {
			if (fill(in) == 0) {
				goto yyFillLabel1
			}
		}
		goto yy2
	}
yy4:
	in.yycursor += 1
yyFillLabel2:
	yych = in.yyinput[in.yycursor]
	switch (yych) {
	case '0','1','2','3','4','5','6','7','8','9':
		in.yyt1 = in.yycursor
		goto yy7
	default:
		if (in.yylimit <= in.yycursor) {
			if (fill(in) == 0) {
				goto yyFillLabel2
			}
		}
		goto yy5
	}
yy5:
	in.yycursor = in.yymarker
	goto yy2
yy6:
	in.yycursor += 1
yyFillLabel3:
	yych = in.yyinput[in.yycursor]
	switch (yych) {
	case '.':
		goto yy4
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy6
	default:
		if (in.yylimit <= in.yycursor) {
			if (fill(in) == 0) {
				goto yyFillLabel3
			}
		}
		goto yy5
	}
yy7:
	in.yycursor += 1
yyFillLabel4:
	yych = in.yyinput[in.yycursor]
	switch (yych) {
	case '\n':
		in.yyt2 = in.yycursor
		in.yyt3 = -1
		goto yy8
	case '.':
		in.yyt2 = in.yycursor
		goto yy9
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy7
	default:
		if (in.yylimit <= in.yycursor) {
			if (fill(in) == 0) {
				goto yyFillLabel4
			}
		}
		goto yy5
	}
yy8:
	in.yycursor += 1
	t2 = in.yyt1
	t3 = in.yyt2
	t4 = in.yyt3
	t1 = in.yyt1
	t1 -= 1
//line "go/submatch/01_stags_fill.re":78
	{
			major := s2n(in.yyinput[in.token:t1])
			minor := s2n(in.yyinput[t2:t3])
			patch := 0
			if t4 != -1 { patch = s2n(in.yyinput[t4:in.yycursor-1]) }
			vers = append(vers, SemVer{major, minor, patch})
			continue
		}
//line "go/submatch/01_stags_fill.go":204
yy9:
	in.yycursor += 1
yyFillLabel5:
	yych = in.yyinput[in.yycursor]
	switch (yych) {
	case '0','1','2','3','4','5','6','7','8','9':
		in.yyt3 = in.yycursor
		goto yy10
	default:
		if (in.yylimit <= in.yycursor) {
			if (fill(in) == 0) {
				goto yyFillLabel5
			}
		}
		goto yy5
	}
yy10:
	in.yycursor += 1
yyFillLabel6:
	yych = in.yyinput[in.yycursor]
	switch (yych) {
	case '\n':
		goto yy8
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy10
	default:
		if (in.yylimit <= in.yycursor) {
			if (fill(in) == 0) {
				goto yyFillLabel6
			}
		}
		goto yy5
	}
yy11:
//line "go/submatch/01_stags_fill.re":86
	{ return vers }
//line "go/submatch/01_stags_fill.go":241
}
//line "go/submatch/01_stags_fill.re":88

	}
}


func main() () {
	fname := "input"
	content := "1.22.333\n";

	expect := make([]SemVer, 0, BUFSIZE)
	for i := 0; i < BUFSIZE; i += 1 { expect = append(expect, SemVer{1, 22, 333}) }

	// Prepare input file (make sure it exceeds buffer size).
	f, _ := os.Create(fname)
	f.WriteString(strings.Repeat(content, BUFSIZE))
	f.Seek(0, 0)

	// Initialize lexer state: all offsets are at the end of buffer.
	in := &Input{
		file:     f,
		// Sentinel at `yylimit` offset is set to zero, which triggers YYFILL.
		yyinput:  make([]byte, BUFSIZE+1),
		yycursor: BUFSIZE,
		yymarker: BUFSIZE,
		yylimit:  BUFSIZE,
		token:    BUFSIZE,
		eof:      false,
	}

	// Run the lexer and check results.
	if !reflect.DeepEqual(parse(in), expect) { panic("error"); }

	// Cleanup: remove input file.
	f.Close();
	os.Remove(fname);
}
