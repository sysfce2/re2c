// Code generated by re2go, DO NOT EDIT.
//line "codegen/go/loop_switch/basic.re":1
//go:generate re2go $INPUT -o $OUTPUT --loop-switch

package main                              //
                                          //
func lex(str string) {                    // Go code
    var cursor int                        //
                                          //

//line "codegen/go/loop_switch/basic.go":12
{
	var yych byte
	yystate := 0
yyl:
	for {
		switch (yystate) {
		case 0:
			yych = str[cursor]
			cursor += 1
			if (yych <= '0') {
				yystate = 1
				continue yyl
			}
			if (yych <= '9') {
				yystate = 2
				continue yyl
			}
			yystate = 1
			continue yyl
		case 1:
//line "codegen/go/loop_switch/basic.re":18
			{ panic("error!"); }
//line "codegen/go/loop_switch/basic.go":35
		case 2:
			yych = str[cursor]
			if (yych <= '/') {
				yystate = 3
				continue yyl
			}
			if (yych <= '9') {
				cursor += 1
				yystate = 2
				continue yyl
			}
			yystate = 3
			continue yyl
		case 3:
//line "codegen/go/loop_switch/basic.re":17
			{ return }
//line "codegen/go/loop_switch/basic.go":52
		default:
			panic("internal lexer error")
		}
	}
}
//line "codegen/go/loop_switch/basic.re":19

}                                         //
                                          //
func main() {                             // Go code
    lex("1234\x00")                       //
}                                         //
