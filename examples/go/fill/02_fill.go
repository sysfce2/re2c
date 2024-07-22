// Code generated by re2go, DO NOT EDIT.
//line "go/fill/02_fill.re":1
//go:generate re2go $INPUT -o $OUTPUT
package main

import (
	"os"
	"strings"
)

//line "go/fill/02_fill.go":12
const YYMAXFILL = 1
//line "go/fill/02_fill.re":9

const BUFSIZE uint = 4096

type Input struct {
	file     *os.File
	yyinput  []byte
	yycursor uint
	yylimit  uint
	token    uint
	eof      bool
}

func fill(in *Input, need uint) int {
	if in.eof { return -1 } // unexpected EOF

	// Error: lexeme too long. In real life can reallocate a larger buffer.
	if in.token < need { return -2 }

	// Shift buffer contents (discard everything up to the current token).
	copy(in.yyinput[0:], in.yyinput[in.token:in.yylimit])
	in.yycursor -= in.token
	in.yylimit -= in.token
	in.token = 0

	// Fill free space at the end of buffer with new data from file.
	n, _ := in.file.Read(in.yyinput[in.yylimit:BUFSIZE])
	in.yylimit += uint(n)

	// If read less than expected, this is end of input => add zero padding
	// so that the lexer can access characters at the end of buffer.
	if in.yylimit < BUFSIZE {
		in.eof = true
		for i := uint(0); i < YYMAXFILL; i += 1 { in.yyinput[in.yylimit+i] = 0 }
		in.yylimit += YYMAXFILL
	}

	return 0
}

func lex(yyrecord *Input) int {
	count := 0
	for {
		yyrecord.token = yyrecord.yycursor
	
//line "go/fill/02_fill.go":59
{
	var yych byte
	if (yyrecord.yylimit <= yyrecord.yycursor) {
		if r := fill(yyrecord, 1); r != 0 { return r }
	}
	yych = yyrecord.yyinput[yyrecord.yycursor]
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
	yyrecord.yycursor += 1
//line "go/fill/02_fill.re":59
	{
			// Check that it is the sentinel, not some unexpected null.
			if yyrecord.token == yyrecord.yylimit - YYMAXFILL { return count } else { return -1 }
		}
//line "go/fill/02_fill.go":83
yy2:
	yyrecord.yycursor += 1
//line "go/fill/02_fill.re":65
	{ return -1 }
//line "go/fill/02_fill.go":88
yy3:
	yyrecord.yycursor += 1
	if (yyrecord.yylimit <= yyrecord.yycursor) {
		if r := fill(yyrecord, 1); r != 0 { return r }
	}
	yych = yyrecord.yyinput[yyrecord.yycursor]
	switch (yych) {
	case ' ':
		goto yy3
	default:
		goto yy4
	}
yy4:
//line "go/fill/02_fill.re":64
	{ continue }
//line "go/fill/02_fill.go":104
yy5:
	yyrecord.yycursor += 1
	if (yyrecord.yylimit <= yyrecord.yycursor) {
		if r := fill(yyrecord, 1); r != 0 { return r }
	}
	yych = yyrecord.yyinput[yyrecord.yycursor]
	switch (yych) {
	case '\'':
		goto yy6
	case '\\':
		goto yy7
	default:
		goto yy5
	}
yy6:
	yyrecord.yycursor += 1
//line "go/fill/02_fill.re":63
	{ count += 1; continue }
//line "go/fill/02_fill.go":123
yy7:
	yyrecord.yycursor += 1
	if (yyrecord.yylimit <= yyrecord.yycursor) {
		if r := fill(yyrecord, 1); r != 0 { return r }
	}
	goto yy5
}
//line "go/fill/02_fill.re":66

	}
}

func main() () {
	fname := "input"
	content := "'qu\000tes' 'are' 'fine: \\'' ";

	// Prepare input file: a few times the size of the buffer, containing
	// strings with zeroes and escaped quotes.
	f, _ := os.Create(fname)
	f.WriteString(strings.Repeat(content, int(BUFSIZE)))
	f.Seek(0, 0)
	count := 3 * int(BUFSIZE) // number of quoted strings written to file

	// Prepare lexer state: all offsets are at the end of buffer.
	// This immediately triggers YYFILL, as the YYLESSTHAN condition is true.
	in := &Input{
		file:     f,
		yyinput:  make([]byte, BUFSIZE+YYMAXFILL),
		yycursor: BUFSIZE,
		yylimit:  BUFSIZE,
		token:    BUFSIZE,
		eof:      false,
	}

	// Run the lexer.
	if lex(in) != count { panic("error"); }

	// Cleanup: remove input file.
	f.Close();
	os.Remove(fname);
}
