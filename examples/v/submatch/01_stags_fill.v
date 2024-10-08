// Code generated by re2v, DO NOT EDIT.
//line "v/submatch/01_stags_fill.re":1
// re2v $INPUT -o $OUTPUT

import arrays
import os
import strings

const bufsize = 4096
const tag_none = -1

struct State {
    file     os.File
mut:
    yyinput  []u8
    yycursor int
    yymarker int
    yylimit  int
    token    int
    // Intermediate tag variables must be part of the lexer state passed to YYFILL.
    // They don't correspond to tags and should be autogenerated by re2c.
    
//line "v/submatch/01_stags_fill.v":24
	yyt1 int
	yyt2 int
	yyt3 int
//line "v/submatch/01_stags_fill.re":20

    eof      bool
}

struct SemVer {
    major int
    minor int
    patch int
}

fn s2n(s []u8) int { // convert pre-parsed string to number
    mut n := 0
    for c in s { n = n * 10 + int(c - 48) }
    return n
}

fn fill(mut st &State) int {
    if st.eof { return -1 } // unexpected EOF

    // Error: lexeme too long. In real life can reallocate a larger buffer.
    if st.token < 1 { return -2 }

    // Shift buffer contents (discard everything up to the current token).
    copy(mut &st.yyinput, st.yyinput[st.token..st.yylimit])
    st.yycursor -= st.token
    st.yymarker -= st.token
    st.yylimit -= st.token
    // Tag variables need to be shifted like other input positions. The check
    // for -1 is only needed if some tags are nested inside of alternative or
    // repetition, so that they can have -1 value.
    
//line "v/submatch/01_stags_fill.v":60
	if st.yyt1 != -1 { st.yyt1 -= st.token }
	if st.yyt2 != -1 { st.yyt2 -= st.token }
	if st.yyt3 != -1 { st.yyt3 -= st.token }
//line "v/submatch/01_stags_fill.re":50

    st.token = 0

    // Fill free space at the end of buffer with new data from file.
    pos := st.file.tell() or { 0 }
    if n := st.file.read_bytes_into(u64(pos), mut st.yyinput[st.yylimit..bufsize]) {
        st.yylimit += n
    }
    st.yyinput[st.yylimit] = 0 // append sentinel symbol

    // If read less than expected, this is the end of input.
    st.eof = st.yylimit < bufsize

    return 0
}

fn parse(mut st &State) ?[]SemVer {
    // Final tag variables available in semantic action.
    
//line "v/submatch/01_stags_fill.v":84
mut t1 := tag_none
mut t2 := tag_none
mut t3 := tag_none
mut t4 := tag_none
//line "v/submatch/01_stags_fill.re":68


    mut vers := []SemVer{}
loop:
    st.token = st.yycursor
    
//line "v/submatch/01_stags_fill.v":96
    mut yych := 0
yyFillLabel0:
    yych = st.yyinput[st.yycursor]
    match yych {
        0x30...0x39 { unsafe { goto yy3 } }
        else {
            if st.yylimit <= st.yycursor {
                if fill(mut st) == 0 {
                    unsafe { goto yyFillLabel0 }
                }
                unsafe { goto yy11 }
            }
            unsafe { goto yy1 }
        }
    }
yy1:
    st.yycursor += 1
yy2:
//line "v/submatch/01_stags_fill.re":92
    return none
//line "v/submatch/01_stags_fill.v":117
yy3:
    st.yycursor += 1
    st.yymarker = st.yycursor
yyFillLabel1:
    yych = st.yyinput[st.yycursor]
    match yych {
        0x2E { unsafe { goto yy4 } }
        0x30...0x39 { unsafe { goto yy6 } }
        else {
            if st.yylimit <= st.yycursor {
                if fill(mut st) == 0 {
                    unsafe { goto yyFillLabel1 }
                }
            }
            unsafe { goto yy2 }
        }
    }
yy4:
    st.yycursor += 1
yyFillLabel2:
    yych = st.yyinput[st.yycursor]
    match yych {
        0x30...0x39 {
            st.yyt1 = st.yycursor
            unsafe { goto yy7 }
        }
        else {
            if st.yylimit <= st.yycursor {
                if fill(mut st) == 0 {
                    unsafe { goto yyFillLabel2 }
                }
            }
            unsafe { goto yy5 }
        }
    }
yy5:
    st.yycursor = st.yymarker
    unsafe { goto yy2 }
yy6:
    st.yycursor += 1
yyFillLabel3:
    yych = st.yyinput[st.yycursor]
    match yych {
        0x2E { unsafe { goto yy4 } }
        0x30...0x39 { unsafe { goto yy6 } }
        else {
            if st.yylimit <= st.yycursor {
                if fill(mut st) == 0 {
                    unsafe { goto yyFillLabel3 }
                }
            }
            unsafe { goto yy5 }
        }
    }
yy7:
    st.yycursor += 1
yyFillLabel4:
    yych = st.yyinput[st.yycursor]
    match yych {
        0x0A {
            st.yyt2 = st.yycursor
            st.yyt3 = -1
            unsafe { goto yy8 }
        }
        0x2E {
            st.yyt2 = st.yycursor
            unsafe { goto yy9 }
        }
        0x30...0x39 { unsafe { goto yy7 } }
        else {
            if st.yylimit <= st.yycursor {
                if fill(mut st) == 0 {
                    unsafe { goto yyFillLabel4 }
                }
            }
            unsafe { goto yy5 }
        }
    }
yy8:
    st.yycursor += 1
    t2 = st.yyt1
    t3 = st.yyt2
    t4 = st.yyt3
    t1 = st.yyt1
    t1-= 1
//line "v/submatch/01_stags_fill.re":82
    
            ver := SemVer {
                major: s2n(st.yyinput[st.token..t1]),
                minor: s2n(st.yyinput[t2..t3]),
                patch: if t4 == -1 { 0 } else { s2n(st.yyinput[t4..st.yycursor - 1]) }
            }
            vers = arrays.concat(vers, ver)
            unsafe { goto loop }

//line "v/submatch/01_stags_fill.v":213
yy9:
    st.yycursor += 1
yyFillLabel5:
    yych = st.yyinput[st.yycursor]
    match yych {
        0x30...0x39 {
            st.yyt3 = st.yycursor
            unsafe { goto yy10 }
        }
        else {
            if st.yylimit <= st.yycursor {
                if fill(mut st) == 0 {
                    unsafe { goto yyFillLabel5 }
                }
            }
            unsafe { goto yy5 }
        }
    }
yy10:
    st.yycursor += 1
yyFillLabel6:
    yych = st.yyinput[st.yycursor]
    match yych {
        0x0A { unsafe { goto yy8 } }
        0x30...0x39 { unsafe { goto yy10 } }
        else {
            if st.yylimit <= st.yycursor {
                if fill(mut st) == 0 {
                    unsafe { goto yyFillLabel6 }
                }
            }
            unsafe { goto yy5 }
        }
    }
yy11:
//line "v/submatch/01_stags_fill.re":91
    return vers
//line "v/submatch/01_stags_fill.v":251
//line "v/submatch/01_stags_fill.re":93

}

fn main() {
    fname := "input"
    content := "1.22.333\n";

    // Prepare input file: a few times the size of the buffer, containing
    // strings with zeroes and escaped quotes.
    mut fw := os.create(fname)!
    fw.write_string(strings.repeat_string(content, bufsize))!
    fw.close()

    // Prepare lexer state: all offsets are at the end of buffer.
    mut fr := os.open(fname)!
    mut st := &State{
        file:      fr,
        // Sentinel at `yylimit` offset is set to zero, which triggers YYFILL.
        yyinput:  []u8{len: bufsize + 1},
        yycursor: bufsize,
        yymarker: bufsize,
        yylimit:  bufsize,
        token:    bufsize,
        eof:      false,
    }

    // Run the lexer.
    expect := []SemVer{len: bufsize, init: SemVer{1, 22, 333}}
    result := parse(mut st) or { panic("parse failed") }
    if result != expect { panic("error") }

    // Cleanup: remove input file.
    fr.close()
    os.rm(fname)!
}
