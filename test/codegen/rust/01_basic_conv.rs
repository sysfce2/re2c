/* Generated by re2rust */
// re2rust $INPUT -o $OUTPUT

fn lex(yyinput: &[u8]) -> bool {
    let mut yycursor = 0;
    
{
	#[allow(unused_assignments)]
	let mut yych : i8 = 0;
	let mut yystate : usize = 0;
	'yyl: loop {
		match yystate {
			0 => {
				yych = unsafe {*yyinput.get_unchecked(yycursor)} as i8;
				yycursor += 1;
				match yych {
					0x31 ..= 0x39 => {
						yystate = 2;
						continue 'yyl;
					}
					_ => {
						yystate = 1;
						continue 'yyl;
					}
				}
			}
			1 => { return false; },
			2 => {
				yych = unsafe {*yyinput.get_unchecked(yycursor)} as i8;
				match yych {
					0x30 ..= 0x39 => {
						yycursor += 1;
						yystate = 2;
						continue 'yyl;
					}
					_ => {
						yystate = 3;
						continue 'yyl;
					}
				}
			}
			3 => { return true; },
			_ => panic!("internal lexer error"),
		}
	}
}

}

fn main() {
    assert!(lex(b"1234\0"));
}