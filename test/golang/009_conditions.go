// Code generated by re2c, DO NOT EDIT.
//go:generate re2go $INPUT -o $OUTPUT -ci
package main

import "fmt"

const (
	yycinit = iota
	yycbin
	yycdec
	yychex
	yycoct
)


func Lex(str string) int {
	var cursor int
	cond := yycinit
	n := 0

	
{
	var yych byte
	switch (cond) {
	case yycinit:
		goto yyc_init
	case yycbin:
		goto yyc_bin
	case yycdec:
		goto yyc_dec
	case yychex:
		goto yyc_hex
	case yycoct:
		goto yyc_oct
	}
/* *********************************** */
yyc_init:
	yych = str[cursor]
	switch (yych) {
	case '0':
		goto yy4
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy6
	default:
		goto yy2
	}
yy2:
	cursor += 1
	{ return -1 }
yy4:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'B':
		fallthrough
	case 'b':
		goto yy8
	case 'X':
		fallthrough
	case 'x':
		goto yy10
	default:
		goto yy5
	}
yy5:
	cond = yycoct
	goto yyc_oct
yy6:
	cursor += 1
	cursor += -1
	cond = yycdec
	goto yyc_dec
yy8:
	cursor += 1
	cond = yycbin
	goto yyc_bin
yy10:
	cursor += 1
	cond = yychex
	goto yyc_hex
/* *********************************** */
yyc_bin:
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy14
	case '0':
		fallthrough
	case '1':
		goto yy18
	default:
		goto yy16
	}
yy14:
	cursor += 1
	{ return n }
yy16:
	cursor += 1
	{ return -1 }
yy18:
	cursor += 1
	{ n = n*2 + int(str[cursor-1] - '0'); goto yyc_bin; }
/* *********************************** */
yyc_dec:
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy22
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy26
	default:
		goto yy24
	}
yy22:
	cursor += 1
	{ return n }
yy24:
	cursor += 1
	{ return -1 }
yy26:
	cursor += 1
	{ n = n*10 + int(str[cursor-1] - '0'); goto yyc_dec; }
/* *********************************** */
yyc_hex:
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy30
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy34
	case 'A':
		fallthrough
	case 'B':
		fallthrough
	case 'C':
		fallthrough
	case 'D':
		fallthrough
	case 'E':
		fallthrough
	case 'F':
		goto yy36
	case 'a':
		fallthrough
	case 'b':
		fallthrough
	case 'c':
		fallthrough
	case 'd':
		fallthrough
	case 'e':
		fallthrough
	case 'f':
		goto yy38
	default:
		goto yy32
	}
yy30:
	cursor += 1
	{ return n }
yy32:
	cursor += 1
	{ return -1 }
yy34:
	cursor += 1
	{ n = n*16 + int(str[cursor-1] - '0'); goto yyc_hex; }
yy36:
	cursor += 1
	{ n = n*16 + int(str[cursor-1] - 'A') + 10; goto yyc_hex; }
yy38:
	cursor += 1
	{ n = n*16 + int(str[cursor-1] - 'a') + 10; goto yyc_hex; }
/* *********************************** */
yyc_oct:
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy42
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		goto yy46
	default:
		goto yy44
	}
yy42:
	cursor += 1
	{ return n }
yy44:
	cursor += 1
	{ return -1 }
yy46:
	cursor += 1
	{ n = n*8 + int(str[cursor-1] - '0'); goto yyc_oct; }
}

}

func test(str string, num int) {
	if res := Lex(str); res != num {
		panic(fmt.Sprintf("failed %s: expected %d, got %d", str, num, res))
	}
}

func main() {
	test("123\000", 123)
	test("0b101\000", 5)
	test("0x10Ff\000", 4096 + 255)
	test("0112\000", 74)
	test("0\000", 0)
	test("\000", -1)
}
golang/009_conditions.re:28:19: warning: rule in condition 'init' matches empty string [-Wmatch-empty-string]
