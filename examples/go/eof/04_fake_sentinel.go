// Code generated by re2c, DO NOT EDIT.
//line "go/eof/04_fake_sentinel.re":1
//go:generate re2go $INPUT -o $OUTPUT
package main

// Returns "fake" terminating null if cursor has reached limit.
func peek(str string, cur int) byte {
	if cur >= len(str) {
		return 0 // fake null
	} else {
		return str[cur]
	}
}

// Expects a string without terminating null.
func lex(str string) int {
	var cur int
	count := 0

	for { 
//line "go/eof/04_fake_sentinel.go":22
{
	var yych byte
	yych = peek(str, cur)
	switch (yych) {
	case 0x00:
		goto yy1
	case ' ':
		goto yy3
	case 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z':
		goto yy5
	default:
		goto yy2
	}
yy1:
	cur += 1
//line "go/eof/04_fake_sentinel.re":25
	{ return count }
//line "go/eof/04_fake_sentinel.go":40
yy2:
	cur += 1
//line "go/eof/04_fake_sentinel.re":24
	{ return -1 }
//line "go/eof/04_fake_sentinel.go":45
yy3:
	cur += 1
	yych = peek(str, cur)
	switch (yych) {
	case ' ':
		goto yy3
	default:
		goto yy4
	}
yy4:
//line "go/eof/04_fake_sentinel.re":27
	{ continue }
//line "go/eof/04_fake_sentinel.go":58
yy5:
	cur += 1
	yych = peek(str, cur)
	switch (yych) {
	case 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z':
		goto yy5
	default:
		goto yy6
	}
yy6:
//line "go/eof/04_fake_sentinel.re":26
	{ count += 1; continue }
//line "go/eof/04_fake_sentinel.go":71
}
//line "go/eof/04_fake_sentinel.re":28

	}
}

func main() {
	assert_eq := func(x, y int) { if x != y { panic("error") } }
	assert_eq(lex(""), 0)
	assert_eq(lex("one two three"), 3)
	assert_eq(lex("f0ur"), -1)
}