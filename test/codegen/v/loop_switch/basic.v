// Code generated by re2v, DO NOT EDIT.
//line "codegen/v/loop_switch/basic.re":1
// re2v $INPUT -o $OUTPUT --loop-switch

fn lex(str string) {
    mut cursor := 0
    
//line "codegen/v/loop_switch/basic.v":9
    mut yych := 0
    mut yystate := 0
yyl:
    for {
        match yystate {
            0 {
                yych = str[cursor]
                cursor += 1
                match yych {
                    0x31...0x39 {
                        yystate = 2
                        continue yyl
                    }
                    else {
                        yystate = 1
                        continue yyl
                    }
                }
            }
            1 {
//line "codegen/v/loop_switch/basic.re":14
                panic("error!")
//line "codegen/v/loop_switch/basic.v":32
            }
            2 {
                yych = str[cursor]
                match yych {
                    0x30...0x39 {
                        cursor += 1
                        yystate = 2
                        continue yyl
                    }
                    else {
                        yystate = 3
                        continue yyl
                    }
                }
            }
            3 {
//line "codegen/v/loop_switch/basic.re":13
                return
//line "codegen/v/loop_switch/basic.v":51
            }
            else { panic("internal lexer error") }
        }
    }
//line "codegen/v/loop_switch/basic.re":15

}

fn main() {
    lex("1234\x00")
}
