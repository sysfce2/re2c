// Code generated by re2v, DO NOT EDIT.
//line "v/eof/02_bounds_checking.re":1
// re2v $INPUT -o $OUTPUT

//line "v/eof/02_bounds_checking.v":6
const yymaxfill = 1
//line "v/eof/02_bounds_checking.re":3


// Expects yymaxfill-padded string.
fn lex(str string) int {
    // Pad string with yymaxfill zeroes at the end.
    mut yyinput := []u8{len: str.len + yymaxfill}
    copy(mut &yyinput, str.bytes())

    mut yycursor := 0
    yylimit := yyinput.len
    mut count := 0

loop: 
//line "v/eof/02_bounds_checking.v":22
    mut yych := 0
    if yylimit <= yycursor {
        return -1
    }
    yych = yyinput[yycursor]
    match yych {
        0x00 { unsafe { goto yy1 } }
        0x20 { unsafe { goto yy3 } }
        0x27 { unsafe { goto yy5 } }
        else { unsafe { goto yy2 } }
    }
yy1:
    yycursor += 1
//line "v/eof/02_bounds_checking.re":20
    
        // Check that it is the sentinel, not some unexpected null.
        if yycursor - 1 == str.len { return count } else { return -1 }

//line "v/eof/02_bounds_checking.v":41
yy2:
    yycursor += 1
//line "v/eof/02_bounds_checking.re":26
    return -1
//line "v/eof/02_bounds_checking.v":46
yy3:
    yycursor += 1
    if yylimit <= yycursor {
        return -1
    }
    yych = yyinput[yycursor]
    match yych {
        0x20 { unsafe { goto yy3 } }
        else { unsafe { goto yy4 } }
    }
yy4:
//line "v/eof/02_bounds_checking.re":25
    unsafe { goto loop }
//line "v/eof/02_bounds_checking.v":60
yy5:
    yycursor += 1
    if yylimit <= yycursor {
        return -1
    }
    yych = yyinput[yycursor]
    match yych {
        0x27 { unsafe { goto yy6 } }
        0x5C { unsafe { goto yy7 } }
        else { unsafe { goto yy5 } }
    }
yy6:
    yycursor += 1
//line "v/eof/02_bounds_checking.re":24
    count += 1; unsafe { goto loop }
//line "v/eof/02_bounds_checking.v":76
yy7:
    yycursor += 1
    if yylimit <= yycursor {
        return -1
    }
    unsafe { goto yy5 }
//line "v/eof/02_bounds_checking.re":28

}

fn main() {
    assert lex("") == 0
    assert lex("'qu\0tes' 'are' 'fine: \\'' ") == 3
    assert lex("'unterminated\\'") == -1
    assert lex("'unexpected \00 null\\'") == -1
}
