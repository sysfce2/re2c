/* Generated by re2c */
// re2rust $INPUT -o $OUTPUT

// Expect a string without terminating null.
fn lex(s: &[u8]) -> isize {
    let mut count = 0;
    let mut cur = 0;
    let lim = s.len();

    'lex: loop {
{
	#[allow(unused_assignments)]
	let mut yych : u8 = 0;
	let mut yystate : usize = 0;
	'yyl: loop {
		match yystate {
			0 => {
				yych = unsafe {if cur < lim {*s.get_unchecked(cur)} else {0}};
				cur += 1;
				match yych {
					0x00 => {
						yystate = 1;
						continue 'yyl;
					}
					0x20 => {
						yystate = 3;
						continue 'yyl;
					}
					0x61 ..= 0x7A => {
						yystate = 5;
						continue 'yyl;
					}
					_ => {
						yystate = 2;
						continue 'yyl;
					}
				}
			}
			1 => { return count; }
			2 => { return -1; }
			3 => {
				yych = unsafe {if cur < lim {*s.get_unchecked(cur)} else {0}};
				match yych {
					0x20 => {
						cur += 1;
						yystate = 3;
						continue 'yyl;
					}
					_ => {
						yystate = 4;
						continue 'yyl;
					}
				}
			}
			4 => { continue 'lex; }
			5 => {
				yych = unsafe {if cur < lim {*s.get_unchecked(cur)} else {0}};
				match yych {
					0x61 ..= 0x7A => {
						cur += 1;
						yystate = 5;
						continue 'yyl;
					}
					_ => {
						yystate = 6;
						continue 'yyl;
					}
				}
			}
			6 => { count += 1; continue 'lex; }
			_ => {
				panic!("internal lexer error")
			}
		}
	}
}
}
}

fn main() {
    assert_eq!(lex(b""), 0);
    assert_eq!(lex(b"one two three "), 3);
    assert_eq!(lex(b"f0ur"), -1);
}