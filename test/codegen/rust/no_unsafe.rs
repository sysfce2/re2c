/* Generated by re2rust */
// re2rust $INPUT -o $OUTPUT --no-unsafe

// expect safe YYPEEK

{
	#[allow(unused_assignments)]
	let mut yych : YYCTYPE = 0;
	let mut yystate : usize = 0;
	'yyl: loop {
		match yystate {
			0 => {
				if YYLESSTHAN {
					YYFILL
				}
				yych = YYPEEK;
				YYSKIP
				match yych {
					0x61 => {
						yystate = 2;
						continue 'yyl;
					}
					_ => {
						yystate = 1;
						continue 'yyl;
					}
				}
			}
			1 => {},
			2 => {},
			_ => panic!("internal lexer error"),
		}
	}
}


// expect `unsafe { ... }` wrapper around YYPEEK

{
	#[allow(unused_assignments)]
	let mut yych : YYCTYPE = 0;
	let mut yystate : usize = 0;
	'yyl: loop {
		match yystate {
			0 => {
				if YYLESSTHAN {
					YYFILL
				}
				yych = unsafe {YYPEEK};
				YYSKIP
				match yych {
					0x61 => {
						yystate = 2;
						continue 'yyl;
					}
					_ => {
						yystate = 1;
						continue 'yyl;
					}
				}
			}
			1 => {},
			2 => {},
			_ => panic!("internal lexer error"),
		}
	}
}


// expect safe YYPEEK

{
	#[allow(unused_assignments)]
	let mut yych : YYCTYPE = 0;
	let mut yystate : usize = 0;
	'yyl: loop {
		match yystate {
			0 => {
				if YYLESSTHAN {
					YYFILL
				}
				yych = YYPEEK;
				YYSKIP
				match yych {
					0x61 => {
						yystate = 2;
						continue 'yyl;
					}
					_ => {
						yystate = 1;
						continue 'yyl;
					}
				}
			}
			1 => {},
			2 => {},
			_ => panic!("internal lexer error"),
		}
	}
}

