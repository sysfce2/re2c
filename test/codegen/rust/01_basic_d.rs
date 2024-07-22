/* Generated by re2rust */
// re2rust $INPUT -o $OUTPUT -d

fn lex(s: &[u8]) -> bool {
    let mut cursor = 0;
    
{
	#[allow(unused_assignments)]
	let mut yych : u8 = 0;
	let mut yystate : usize = 0;
	'yyl: loop {
		match yystate {
			0 => {
				format!("lex: char '{}' in state {}\n", yych, 0);
				yych = unsafe {*s.get_unchecked(cursor)};
				cursor += 1;
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
			1 => {
				format!("lex: char '{}' in state {}\n", yych, 1);
				{ return false; }
			}
			2 => {
				format!("lex: char '{}' in state {}\n", yych, 2);
				yych = unsafe {*s.get_unchecked(cursor)};
				match yych {
					0x30 ..= 0x39 => {
						cursor += 1;
						yystate = 2;
						continue 'yyl;
					}
					_ => {
						yystate = 3;
						continue 'yyl;
					}
				}
			}
			3 => {
				format!("lex: char '{}' in state {}\n", yych, 3);
				{ return true; }
			}
			_ => panic!("internal lexer error"),
		}
	}
}

}

fn main() {
    assert!(lex(b"1234\0"));
}
