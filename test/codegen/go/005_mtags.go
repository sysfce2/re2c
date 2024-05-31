// Code generated by re2c, DO NOT EDIT.
//go:generate re2go $INPUT -o $OUTPUT -ir
package main

import "fmt"
import "reflect"

type mtagElem struct {
	tag, pred int
}

type mtagTrie = []mtagElem

func createPool(capacity int) mtagTrie {
	return make([]mtagElem, 0, capacity)
}

func mtag(mt *mtagTrie, tag int, val int) int {
	*mt = append(*mt, mtagElem{val, tag})
	return len(*mt) - 1
}

const mtagRoot int = -1



func LexSlices(str string) (a []int, b []int, c int) {
	var cursor, marker int

	var yyt3 int

	var yytm1 []int
	var yytm2 []int
	var yytm4 []int
	var yytm5 []int
	var yytm6 []int

	
{
	var yych byte
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt3 = -1
		yytm2 = append(yytm2, -1)
		yytm1 = append(yytm1, -1)
		goto yy1
	case 'a':
		yytm1 = append(yytm1, cursor)
		yytm5 = append(yytm5, cursor)
		yytm4 = append(yytm4, cursor)
		goto yy4
	case 'b':
		yytm2 = append(yytm2, cursor)
		goto yy5
	case 'c':
		yyt3 = cursor
		goto yy6
	default:
		goto yy2
	}
yy1:
	cursor += 1
	a = yytm1
	b = yytm2
	c = yyt3
	{ return }
yy2:
	cursor += 1
yy3:
	{return nil, nil, -2 }
yy4:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt3 = -1
		yytm2 = append(yytm2, -1)
		goto yy7
	case 'a':
		goto yy8
	case 'b':
		yytm2 = append(yytm2, cursor)
		yytm6 = append(yytm6, cursor)
		goto yy10
	case 'c':
		yyt3 = cursor
		yytm2 = append(yytm2, -1)
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
		yyt3 = -1
		yytm5 = append(yytm5, -1)
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
		yytm2 = append(yytm2, -1)
		yytm5 = append(yytm5, -1)
		goto yy7
	case 'c':
		goto yy13
	default:
		goto yy3
	}
yy7:
	cursor += 1
	a = yytm5
	b = yytm2
	c = yyt3
	{ return }
yy8:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt3 = -1
		yytm2 = append(yytm2, -1)
		goto yy7
	case 'a':
		goto yy8
	case 'b':
		yytm6 = append(yytm6, cursor)
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
		yyt3 = cursor
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
		yytm1 = append(yytm1, cursor)
		goto yy16
	default:
		goto yy9
	}
yy12:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt3 = -1
		yytm5 = append(yytm5, -1)
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
		yytm2 = append(yytm2, -1)
		yytm5 = append(yytm5, -1)
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
		yyt3 = cursor
		goto yy17
	default:
		goto yy9
	}
yy15:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'a':
		yytm1 = append(yytm1, cursor)
		goto yy16
	default:
		goto yy18
	}
yy16:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'b':
		yytm2 = append(yytm2, cursor)
		goto yy20
	case 'c':
		yyt3 = cursor
		yytm2 = append(yytm2, -1)
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
	a = yytm4
	b = yytm6
	c = yyt3
	{ return }
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

}

func LexTrie(str string) (mt mtagTrie, a int, b int, c int) {
	var cursor, marker int
	mt = createPool(256)

	var yyt3 int

	yytm1 := mtagRoot
	yytm2 := mtagRoot
	yytm4 := mtagRoot
	yytm5 := mtagRoot
	yytm6 := mtagRoot

	
{
	var yych byte
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt3 = -1
		yytm2 = mtag(&mt, yytm2, -1)
		yytm1 = mtag(&mt, yytm1, -1)
		goto yy22
	case 'a':
		yytm1 = mtag(&mt, yytm1, cursor)
		yytm5 = mtag(&mt, yytm5, cursor)
		yytm4 = mtag(&mt, yytm4, cursor)
		goto yy25
	case 'b':
		yytm2 = mtag(&mt, yytm2, cursor)
		goto yy26
	case 'c':
		yyt3 = cursor
		goto yy27
	default:
		goto yy23
	}
yy22:
	cursor += 1
	a = yytm1
	b = yytm2
	c = yyt3
	{ return }
yy23:
	cursor += 1
yy24:
	{ return mt, -2, -2, -2 }
yy25:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt3 = -1
		yytm2 = mtag(&mt, yytm2, -1)
		goto yy28
	case 'a':
		goto yy29
	case 'b':
		yytm2 = mtag(&mt, yytm2, cursor)
		yytm6 = mtag(&mt, yytm6, cursor)
		goto yy31
	case 'c':
		yyt3 = cursor
		yytm2 = mtag(&mt, yytm2, -1)
		goto yy32
	default:
		goto yy24
	}
yy26:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt3 = -1
		yytm5 = mtag(&mt, yytm5, -1)
		goto yy28
	case 'b':
		goto yy33
	default:
		goto yy24
	}
yy27:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yytm2 = mtag(&mt, yytm2, -1)
		yytm5 = mtag(&mt, yytm5, -1)
		goto yy28
	case 'c':
		goto yy34
	default:
		goto yy24
	}
yy28:
	cursor += 1
	a = yytm5
	b = yytm2
	c = yyt3
	{ return }
yy29:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt3 = -1
		yytm2 = mtag(&mt, yytm2, -1)
		goto yy28
	case 'a':
		goto yy29
	case 'b':
		yytm6 = mtag(&mt, yytm6, cursor)
		goto yy35
	default:
		goto yy30
	}
yy30:
	cursor = marker
	goto yy24
yy31:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'c':
		yyt3 = cursor
		goto yy36
	default:
		goto yy30
	}
yy32:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy22
	case 'a':
		yytm1 = mtag(&mt, yytm1, cursor)
		goto yy37
	default:
		goto yy30
	}
yy33:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt3 = -1
		yytm5 = mtag(&mt, yytm5, -1)
		goto yy28
	case 'b':
		goto yy33
	default:
		goto yy30
	}
yy34:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yytm2 = mtag(&mt, yytm2, -1)
		yytm5 = mtag(&mt, yytm5, -1)
		goto yy28
	case 'c':
		goto yy34
	default:
		goto yy30
	}
yy35:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'c':
		yyt3 = cursor
		goto yy38
	default:
		goto yy30
	}
yy36:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'a':
		yytm1 = mtag(&mt, yytm1, cursor)
		goto yy37
	default:
		goto yy39
	}
yy37:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'b':
		yytm2 = mtag(&mt, yytm2, cursor)
		goto yy41
	case 'c':
		yyt3 = cursor
		yytm2 = mtag(&mt, yytm2, -1)
		goto yy32
	default:
		goto yy30
	}
yy38:
	cursor += 1
	yych = str[cursor]
yy39:
	switch (yych) {
	case 0x00:
		goto yy40
	case 'c':
		goto yy38
	default:
		goto yy30
	}
yy40:
	cursor += 1
	a = yytm4
	b = yytm6
	c = yyt3
	{ return }
yy41:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'c':
		yyt3 = cursor
		goto yy32
	default:
		goto yy30
	}
}

}

func cmp(str string, a, aref []int, b, bref []int, c, cref int) {
	if !(reflect.DeepEqual(a, aref) && reflect.DeepEqual(b, bref) && c == cref) {
		panic(fmt.Sprintf("failed %s: expected a=%v, b=%v, c=%v, got a=%v, b=%v, c=%v",
			str, aref, bref, cref, a, b, c))
	}
}

func testSlices(str string, aref []int, bref []int, cref int) {
	a, b, c := LexSlices(str)
	cmp(str, a, aref, b, bref, c, cref)
}

func testTrie(str string, aref []int, bref []int, cref int) {
	mt, a, b, c := LexTrie(str)
	cmp(str, unwind(mt, a), aref, unwind(mt, b), bref, c, cref)
}

func unwind(mt mtagTrie, tag int) []int {
	if tag == mtagRoot {
		return []int{}
	} else if tag > mtagRoot && tag < len(mt) {
		e := mt[tag]
		return append(unwind(mt, e.pred), e.tag)
	} else {
		return nil
	}
}

func test(str string, aref []int, bref []int, cref int) {
	testSlices(str, aref, bref, cref)
	testTrie(str, aref, bref, cref)
}

func main() {
	test("aabcc\000", []int{0}, []int{2}, 3)
	test("aaa\000", []int{0}, []int{-1}, -1)
	test("acabc\000", []int{0, 2}, []int{-1, 3}, 4)
	test("abcac\000", []int{0, 3}, []int{1, -1}, 4)
	test("ab\000", nil, nil, -2)
}