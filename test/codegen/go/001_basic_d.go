// Code generated by re2go, DO NOT EDIT.
//line "codegen/go/001_basic_d.re":1
//go:generate re2go $INPUT -o $OUTPUT -d
package main

import "fmt"

func Lex(str string) int {
	var cursor, marker int

	
//line "codegen/go/001_basic_d.go":13
{
	var yych byte
	yych = str[cursor]
	fmt.Printf("Lex: char '%c' int state %u\n", yych, 0);
	switch (yych) {
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy3
	default:
		goto yy1
	}
yy1:
	fmt.Printf("Lex: char '%c' int state %u\n", yych, 1);
	cursor += 1
yy2:
	fmt.Printf("Lex: char '%c' int state %u\n", yych, 2);
//line "codegen/go/001_basic_d.re":20
	{
		return -1
	}
//line "codegen/go/001_basic_d.go":33
yy3:
	fmt.Printf("Lex: char '%c' int state %u\n", yych, 3);
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy4
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy5
	default:
		goto yy2
	}
yy4:
	fmt.Printf("Lex: char '%c' int state %u\n", yych, 4);
	cursor += 1
//line "codegen/go/001_basic_d.re":24
	{
		return 1
	}
//line "codegen/go/001_basic_d.go":54
yy5:
	fmt.Printf("Lex: char '%c' int state %u\n", yych, 5);
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy4
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy5
	default:
		goto yy6
	}
yy6:
	fmt.Printf("Lex: char '%c' int state %u\n", yych, 6);
	cursor = marker
	goto yy2
}
//line "codegen/go/001_basic_d.re":27

}

func main() {
	if Lex("123\000") != 1 {
		panic("expected 123")
	}
}
