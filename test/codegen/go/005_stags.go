// Code generated by re2go, DO NOT EDIT.
//line "codegen/go/005_stags.re":1
//go:generate re2go $INPUT -o $OUTPUT 
package main

func Lex(str string) (a int, b int, c int) {
	var cursor, marker int
	
//line "codegen/go/005_stags.go":10
	var yyt1 int
	var yyt2 int
	var yyt3 int
//line "codegen/go/005_stags.re":6


	
//line "codegen/go/005_stags.go":18
{
	var yych byte
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt1 = -1
		yyt2 = -1
		yyt3 = -1
		goto yy1
	case 'a':
		yyt1 = cursor
		goto yy4
	case 'b':
		yyt2 = cursor
		goto yy5
	case 'c':
		yyt3 = cursor
		goto yy6
	default:
		goto yy2
	}
yy1:
	cursor += 1
	a = yyt1
	b = yyt2
	c = yyt3
//line "codegen/go/005_stags.re":34
	{
		return a, b, c
	}
//line "codegen/go/005_stags.go":49
yy2:
	cursor += 1
yy3:
//line "codegen/go/005_stags.re":22
	{
		return -2, -2, -2
	}
//line "codegen/go/005_stags.go":57
yy4:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt2 = -1
		yyt3 = -1
		goto yy7
	case 'a':
		goto yy8
	case 'b':
		goto yy10
	case 'c':
		yyt2 = -1
		yyt3 = cursor
		goto yy11
	default:
		goto yy3
	}
yy5:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt1 = -1
		yyt3 = -1
		goto yy7
	case 'b':
		goto yy12
	default:
		goto yy3
	}
yy6:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt1 = -1
		yyt2 = -1
		goto yy7
	case 'c':
		goto yy13
	default:
		goto yy3
	}
yy7:
	cursor += 1
	a = yyt1
	b = yyt2
	c = yyt3
//line "codegen/go/005_stags.re":30
	{
		return a, b, c
	}
//line "codegen/go/005_stags.go":115
yy8:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt2 = -1
		yyt3 = -1
		goto yy7
	case 'a':
		goto yy8
	case 'b':
		goto yy14
	default:
		goto yy9
	}
yy9:
	cursor = marker
	goto yy3
yy10:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'c':
		yyt2 = cursor
		goto yy15
	default:
		goto yy9
	}
yy11:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy1
	case 'a':
		yyt1 = cursor
		goto yy16
	default:
		goto yy9
	}
yy12:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt1 = -1
		yyt3 = -1
		goto yy7
	case 'b':
		goto yy12
	default:
		goto yy9
	}
yy13:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt1 = -1
		yyt2 = -1
		goto yy7
	case 'c':
		goto yy13
	default:
		goto yy9
	}
yy14:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'c':
		yyt2 = cursor
		goto yy17
	default:
		goto yy9
	}
yy15:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'a':
		yyt1 = cursor
		goto yy16
	default:
		goto yy18
	}
yy16:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'b':
		yyt2 = cursor
		goto yy20
	case 'c':
		yyt2 = -1
		yyt3 = cursor
		goto yy11
	default:
		goto yy9
	}
yy17:
	cursor += 1
	yych = str[cursor]
yy18:
	switch (yych) {
	case 0x00:
		goto yy19
	case 'c':
		goto yy17
	default:
		goto yy9
	}
yy19:
	cursor += 1
	a = yyt1
	c = yyt2
	b = yyt2
	b += -1
//line "codegen/go/005_stags.re":26
	{
		return a, b, c
	}
//line "codegen/go/005_stags.go":238
yy20:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'c':
		yyt3 = cursor
		goto yy11
	default:
		goto yy9
	}
}
//line "codegen/go/005_stags.re":37

}

func main() {
	if a, b, c := Lex("aabcc\000"); !(a == 0 && b == 2 && c == 3) {
		panic("expected 0,2,3")
	}
	if a, b, c := Lex("aaa\000"); !(a == 0 && b == -1 && c == -1) {
		panic("expected 0,-1,-1")
	}
	if a, b, c := Lex("acabc\000"); !(a == 2 && b == 3 && c == 4) {
		panic("expected 2,3,4")
	}
	if a, b, c := Lex("abcac\000"); !(a == 3 && b == -1 && c == 4) {
		panic("expected 3,-1,4")
	}
	if a, b, c := Lex("ab\000"); !(a == -2 && b == -2 && c == -2) {
		panic("expected -2,-2,-2")
	}
}
