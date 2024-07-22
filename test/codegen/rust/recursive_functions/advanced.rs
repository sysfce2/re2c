/* Generated by re2rust */
// re2rust $INPUT -o $OUTPUT -cf --recursive-functions -Wno-nondeterministic-tags
#![allow(non_upper_case_globals)]

use std::fs::File;
use std::io::{Read, Write};

const YYC_media_type: isize = 1;
const YYC_header: isize = 23;


const DEBUG: bool = false;
macro_rules! log {
    ($($fmt:expr)? $(, $args:expr)*) => { if DEBUG { println!($($fmt)? $(, $args)*) } }
}

const CON_STATE_SIZE: usize = 4095;

#[derive(Debug, PartialEq)]
enum ConStatus {Ready, Waiting, End, BigPacket, BadPacket}

const NONE: usize = std::usize::MAX;
const MTAG_ROOT: usize = NONE - 1;

struct ConState {
    file: File,
    yyinput: [u8; CON_STATE_SIZE + 1],
    yylimit: usize,
    yycursor: usize,
    yymarker: usize,
    token: usize,
    yycond: isize,
    yystate: isize,
    mtag_trie: MtagTrie,
    
	yyt1: usize,
	yyt2: usize,
    
	yytm1: usize,
	yytm10: usize,
	yytm2: usize,
	yytm3: usize,
	yytm4: usize,
	yytm5: usize,
	yytm6: usize,
	yytm7: usize,
	yytm8: usize,
	yytm9: usize,
    l1: usize,
    l2: usize,
    f1: usize,
    f2: usize,
    p1: usize,
    p2: usize,
    p3: usize,
    p4: usize,
    yyaccept: usize,
}

// An m-tag tree is a way to store histories with an O(1) copy operation.
// Histories naturally form a tree, as they have common start and fork at some
// point. The tree is stored as an array of pairs (tag value, link to parent).
// An m-tag is represented with a single link in the tree (array index).
type MtagTrie = Vec::<MtagElem>;
struct MtagElem {
    elem: usize, // tag value
    pred: usize, // index of the predecessor node or root
}

// Append a single value to an m-tag history.
fn add_mtag(trie: &mut MtagTrie, mtag: usize, value: usize) -> usize {
    trie.push(MtagElem{elem: value, pred: mtag});
    return trie.len() - 1;
}

// Recursively unwind tag histories and collect version components.
fn unwind(trie: &MtagTrie, x: usize, y: usize, str: &[u8], result: &mut Vec::<String>) {
    // Reached the root of the m-tag tree, stop recursion.
    if x == MTAG_ROOT && y == MTAG_ROOT { return; }

    // Unwind history further.
    unwind(trie, trie[x].pred, trie[y].pred, str, result);

    // Get tag values. Tag histories must have equal length.
    assert!(x != MTAG_ROOT && y != MTAG_ROOT);
    let (ex, ey) = (trie[x].elem, trie[y].elem);

    if ex != NONE && ey != NONE {
        // Both tags are valid string indices, extract component.
        result.push(String::from_utf8_lossy(&str[ex..ey]).to_string());
    } else {
        // Both tags are NONE (this corresponds to zero repetitions).
        assert!(ex == NONE && ey == NONE);
    }
}

fn fill(st: &mut ConState) -> ConStatus {
    let shift = st.token;
    let used = st.yylimit - st.token;
    let free = CON_STATE_SIZE - used;

    // Error: no space. In real life can reallocate a larger buffer.
    if free < 1 { return ConStatus::BigPacket; }

    // Shift buffer contents (discard already processed data).
    unsafe {
        let p = st.yyinput.as_mut_ptr();
        std::ptr::copy(p, p.offset(shift as isize), used);
    }
    st.yylimit -= shift;
    st.yycursor -= shift;
    st.yymarker = st.yymarker.overflowing_sub(shift).0; // underflow ok if marker is unused
    st.token -= shift;
    if st.yyt1 != NONE { st.yyt1.overflowing_sub(shift).0; }
if st.yyt2 != NONE { st.yyt2.overflowing_sub(shift).0; }


    // Fill free space at the end of buffer with new data.
    match st.file.read(&mut st.yyinput[st.yylimit..CON_STATE_SIZE]) {
        Ok(n) => st.yylimit += n,
        Err(why) => panic!("cannot read from file: {}", why)
    }
    st.yyinput[st.yylimit] = 0; // append sentinel symbol

    return ConStatus::Ready;
}


fn yy1(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x21 |
		0x23 ..= 0x27 |
		0x2A ..= 0x2B |
		0x2D ..= 0x2E |
		0x30 ..= 0x39 |
		0x41 ..= 0x5A |
		0x5E ..= 0x7A |
		0x7C |
		0x7E => {
			st.yyt1 = st.yycursor;
			st.yycursor += 1;
			yy4(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 0;
				return ConStatus::Waiting;
			} else {
				st.yycursor += 1;
				yy2(st)
			}
		}
	}
}

fn yy2(st: &mut ConState) -> ConStatus {
	yy3(st)
}

fn yy3(st: &mut ConState) -> ConStatus {
	st.yystate = -1;
	return ConStatus::BadPacket;
}

fn yy4(st: &mut ConState) -> ConStatus {
	st.yymarker = st.yycursor;
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x21 |
		0x23 ..= 0x27 |
		0x2A ..= 0x2B |
		0x2D ..= 0x39 |
		0x41 ..= 0x5A |
		0x5E ..= 0x7A |
		0x7C |
		0x7E => yy6(st, yych),
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 1;
				return ConStatus::Waiting;
			} else {
				yy3(st)
			}
		}
	}
}

fn yy5(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	yy6(st, yych)
}

fn yy6(st: &mut ConState, yych: u8) -> ConStatus {
	match yych {
		0x21 |
		0x23 ..= 0x27 |
		0x2A ..= 0x2B |
		0x2D ..= 0x2E |
		0x30 ..= 0x39 |
		0x41 ..= 0x5A |
		0x5E ..= 0x7A |
		0x7C |
		0x7E => {
			st.yycursor += 1;
			yy5(st)
		}
		0x2F => {
			st.yycursor += 1;
			yy8(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 2;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
	}
}

fn yy7(st: &mut ConState) -> ConStatus {
	st.yycursor = st.yymarker;
	yy3(st)
}

fn yy8(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x09 |
		0x0D |
		0x20 |
		0x3B => {
			if st.yylimit <= st.yycursor {
				st.yystate = 3;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
		_ => yy10(st, yych),
	}
}

fn yy9(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	yy10(st, yych)
}

fn yy10(st: &mut ConState, yych: u8) -> ConStatus {
	match yych {
		0x09 |
		0x20 => {
			st.yytm6 = st.yytm10;
			st.yytm6 = add_mtag(&mut st.mtag_trie, st.yytm6, NONE);
			st.yytm5 = st.yytm9;
			st.yytm5 = add_mtag(&mut st.mtag_trie, st.yytm5, NONE);
			st.yytm4 = st.yytm8;
			st.yytm4 = add_mtag(&mut st.mtag_trie, st.yytm4, NONE);
			st.yytm3 = st.yytm7;
			st.yytm3 = add_mtag(&mut st.mtag_trie, st.yytm3, NONE);
			st.yyt2 = st.yycursor;
			st.yycursor += 1;
			yy11(st)
		}
		0x0D => {
			st.yytm6 = st.yytm10;
			st.yytm6 = add_mtag(&mut st.mtag_trie, st.yytm6, NONE);
			st.yytm5 = st.yytm9;
			st.yytm5 = add_mtag(&mut st.mtag_trie, st.yytm5, NONE);
			st.yytm4 = st.yytm8;
			st.yytm4 = add_mtag(&mut st.mtag_trie, st.yytm4, NONE);
			st.yytm3 = st.yytm7;
			st.yytm3 = add_mtag(&mut st.mtag_trie, st.yytm3, NONE);
			st.yyt2 = st.yycursor;
			st.yycursor += 1;
			yy12(st)
		}
		0x21 |
		0x23 ..= 0x27 |
		0x2A ..= 0x2B |
		0x2D ..= 0x2E |
		0x30 ..= 0x39 |
		0x41 ..= 0x5A |
		0x5E ..= 0x7A |
		0x7C |
		0x7E => {
			st.yycursor += 1;
			yy9(st)
		}
		0x3B => {
			st.yyt2 = st.yycursor;
			st.yycursor += 1;
			yy13(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 4;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
	}
}

fn yy11(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x09 |
		0x20 => {
			st.yycursor += 1;
			yy11(st)
		}
		0x0D => {
			st.yycursor += 1;
			yy12(st)
		}
		0x3B => {
			st.yycursor += 1;
			yy13(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 5;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
	}
}

fn yy12(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x0A => {
			st.yycursor += 1;
			yy14(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 6;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
	}
}

fn yy13(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x09 |
		0x20 => {
			st.yycursor += 1;
			yy13(st)
		}
		0x21 |
		0x23 ..= 0x27 |
		0x2A ..= 0x2B |
		0x2D ..= 0x2E |
		0x30 ..= 0x39 |
		0x41 ..= 0x5A |
		0x5E ..= 0x7A |
		0x7C |
		0x7E => {
			st.yytm7 = add_mtag(&mut st.mtag_trie, st.yytm7, st.yycursor);
			st.yycursor += 1;
			yy15(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 7;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
	}
}

fn yy14(st: &mut ConState) -> ConStatus {
	st.l1 = st.yyt1;
	st.l2 = st.yyt2;
	st.p1 = st.yytm3;
	st.p2 = st.yytm4;
	st.p3 = st.yytm5;
	st.p4 = st.yytm6;
	st.yystate = -1;
	
        log!("media type: {}", String::from_utf8_lossy(&st.yyinput[st.l1..st.l2]));

        let mut pnames: Vec::<String> = Vec::new();
        unwind(&mut st.mtag_trie, st.p1, st.p2, &st.yyinput, &mut pnames);
        log!("pnames: {:?}", pnames);

        let mut pvals: Vec::<String> = Vec::new();
        unwind(&mut st.mtag_trie, st.p3, st.p4, &st.yyinput, &mut pvals);
        log!("pvals: {:?}", pvals);

        st.token = st.yycursor;
        return lex(st);

}

fn yy15(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x21 |
		0x23 ..= 0x27 |
		0x2A ..= 0x2B |
		0x2D ..= 0x2E |
		0x30 ..= 0x39 |
		0x41 ..= 0x5A |
		0x5E ..= 0x7A |
		0x7C |
		0x7E => {
			st.yycursor += 1;
			yy15(st)
		}
		0x3D => {
			st.yytm8 = add_mtag(&mut st.mtag_trie, st.yytm8, st.yycursor);
			st.yycursor += 1;
			yy16(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 8;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
	}
}

fn yy16(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x21 |
		0x23 ..= 0x27 |
		0x2A ..= 0x2B |
		0x2D ..= 0x2E |
		0x30 ..= 0x39 |
		0x41 ..= 0x5A |
		0x5E ..= 0x7A |
		0x7C |
		0x7E => {
			st.yytm9 = add_mtag(&mut st.mtag_trie, st.yytm9, st.yycursor);
			st.yycursor += 1;
			yy17(st)
		}
		0x22 => {
			st.yytm9 = add_mtag(&mut st.mtag_trie, st.yytm9, st.yycursor);
			st.yycursor += 1;
			yy18(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 9;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
	}
}

fn yy17(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x09 |
		0x20 => {
			st.yytm10 = add_mtag(&mut st.mtag_trie, st.yytm10, st.yycursor);
			st.yycursor += 1;
			yy19(st)
		}
		0x0D => {
			st.yytm3 = st.yytm7;
			st.yytm4 = st.yytm8;
			st.yytm5 = st.yytm9;
			st.yytm6 = st.yytm10;
			st.yytm6 = add_mtag(&mut st.mtag_trie, st.yytm6, st.yycursor);
			st.yycursor += 1;
			yy12(st)
		}
		0x21 |
		0x23 ..= 0x27 |
		0x2A ..= 0x2B |
		0x2D ..= 0x2E |
		0x30 ..= 0x39 |
		0x41 ..= 0x5A |
		0x5E ..= 0x7A |
		0x7C |
		0x7E => {
			st.yycursor += 1;
			yy17(st)
		}
		0x3B => {
			st.yytm10 = add_mtag(&mut st.mtag_trie, st.yytm10, st.yycursor);
			st.yycursor += 1;
			yy13(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 10;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
	}
}

fn yy18(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x01 ..= 0x08 |
		0x0A ..= 0x1F |
		0x7F => {
			if st.yylimit <= st.yycursor {
				st.yystate = 11;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
		0x22 => {
			st.yycursor += 1;
			yy20(st)
		}
		0x5C => {
			st.yycursor += 1;
			yy21(st)
		}
		_ => {
			st.yycursor += 1;
			yy18(st)
		}
	}
}

fn yy19(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x09 |
		0x20 => {
			st.yycursor += 1;
			yy19(st)
		}
		0x0D => {
			st.yytm3 = st.yytm7;
			st.yytm4 = st.yytm8;
			st.yytm5 = st.yytm9;
			st.yytm6 = st.yytm10;
			st.yycursor += 1;
			yy12(st)
		}
		0x3B => {
			st.yycursor += 1;
			yy13(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 12;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
	}
}

fn yy20(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x09 |
		0x20 => {
			st.yytm10 = add_mtag(&mut st.mtag_trie, st.yytm10, st.yycursor);
			st.yycursor += 1;
			yy19(st)
		}
		0x0D => {
			st.yytm3 = st.yytm7;
			st.yytm4 = st.yytm8;
			st.yytm5 = st.yytm9;
			st.yytm6 = st.yytm10;
			st.yytm6 = add_mtag(&mut st.mtag_trie, st.yytm6, st.yycursor);
			st.yycursor += 1;
			yy12(st)
		}
		0x3B => {
			st.yytm10 = add_mtag(&mut st.mtag_trie, st.yytm10, st.yycursor);
			st.yycursor += 1;
			yy13(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 13;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
	}
}

fn yy21(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x01 ..= 0x08 |
		0x0A ..= 0x1E |
		0x7F => {
			if st.yylimit <= st.yycursor {
				st.yystate = 14;
				return ConStatus::Waiting;
			} else {
				yy7(st)
			}
		}
		_ => {
			st.yycursor += 1;
			yy18(st)
		}
	}
}

fn yy22(st: &mut ConState) -> ConStatus {
	st.yystate = -1;
	return ConStatus::End;
}

fn yyfnmedia_type(st: &mut ConState) -> ConStatus {
	yy1(st)
}

fn yy23(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x01 ..= 0x0C |
		0x0E ..= 0x1E |
		0x7F => {
			if st.yylimit <= st.yycursor {
				st.yystate = 15;
				return ConStatus::Waiting;
			} else {
				st.yycursor += 1;
				yy24(st)
			}
		}
		0x0D => {
			st.yytm1 = add_mtag(&mut st.mtag_trie, st.yytm1, st.yycursor);
			st.yycursor += 1;
			yy26(st)
		}
		_ => {
			st.yycursor += 1;
			yy27(st)
		}
	}
}

fn yy24(st: &mut ConState) -> ConStatus {
	yy25(st)
}

fn yy25(st: &mut ConState) -> ConStatus {
	st.yystate = -1;
	return ConStatus::BadPacket;
}

fn yy26(st: &mut ConState) -> ConStatus {
	st.yyaccept = 0;
	st.yymarker = st.yycursor;
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x0A => {
			st.yycursor += 1;
			yy28(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 16;
				return ConStatus::Waiting;
			} else {
				yy25(st)
			}
		}
	}
}

fn yy27(st: &mut ConState) -> ConStatus {
	st.yyaccept = 0;
	st.yymarker = st.yycursor;
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x01 ..= 0x08 |
		0x0A ..= 0x0C |
		0x0E ..= 0x1E |
		0x7F => {
			if st.yylimit <= st.yycursor {
				st.yystate = 17;
				return ConStatus::Waiting;
			} else {
				yy25(st)
			}
		}
		0x09 => {
			st.yycursor += 1;
			yy30(st)
		}
		0x0D => {
			st.yytm1 = add_mtag(&mut st.mtag_trie, st.yytm1, st.yycursor);
			st.yycursor += 1;
			yy31(st)
		}
		_ => {
			st.yycursor += 1;
			yy32(st)
		}
	}
}

fn yy28(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x09 |
		0x20 => {
			st.yycursor += 1;
			yy33(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 18;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
	}
}

fn yy29(st: &mut ConState) -> ConStatus {
	st.yycursor = st.yymarker;
	if st.yyaccept == 0 {
		yy25(st)
	} else {
		yy38(st)
	}
}

fn yy30(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x01 ..= 0x08 |
		0x0A ..= 0x1E |
		0x7F => {
			if st.yylimit <= st.yycursor {
				st.yystate = 19;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
		0x09 => {
			st.yycursor += 1;
			yy30(st)
		}
		0x20 => {
			st.yycursor += 1;
			yy32(st)
		}
		_ => {
			st.yycursor += 1;
			yy34(st)
		}
	}
}

fn yy31(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x0A => {
			st.yycursor += 1;
			yy28(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 20;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
	}
}

fn yy32(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x01 ..= 0x08 |
		0x0A ..= 0x0C |
		0x0E ..= 0x1E |
		0x7F => {
			if st.yylimit <= st.yycursor {
				st.yystate = 21;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
		0x09 => {
			st.yycursor += 1;
			yy30(st)
		}
		0x0D => {
			st.yytm1 = add_mtag(&mut st.mtag_trie, st.yytm1, st.yycursor);
			st.yycursor += 1;
			yy31(st)
		}
		_ => {
			st.yycursor += 1;
			yy32(st)
		}
	}
}

fn yy33(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x01 ..= 0x08 |
		0x0A ..= 0x0C |
		0x0E ..= 0x1E |
		0x7F => {
			if st.yylimit <= st.yycursor {
				st.yystate = 22;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
		0x09 |
		0x20 => {
			st.yycursor += 1;
			yy33(st)
		}
		0x0D => {
			st.yytm3 = add_mtag(&mut st.mtag_trie, st.yytm3, st.yycursor);
			st.yytm2 = st.yytm1;
			st.yytm2 = add_mtag(&mut st.mtag_trie, st.yytm2, st.yycursor);
			st.yycursor += 1;
			yy35(st)
		}
		_ => {
			st.yytm3 = add_mtag(&mut st.mtag_trie, st.yytm3, st.yycursor);
			st.yycursor += 1;
			yy36(st)
		}
	}
}

fn yy34(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x01 ..= 0x0C |
		0x0E ..= 0x1E |
		0x7F => {
			if st.yylimit <= st.yycursor {
				st.yystate = 23;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
		0x0D => {
			st.yytm1 = add_mtag(&mut st.mtag_trie, st.yytm1, st.yycursor);
			st.yycursor += 1;
			yy31(st)
		}
		_ => {
			st.yycursor += 1;
			yy32(st)
		}
	}
}

fn yy35(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x0A => {
			st.yycursor += 1;
			yy37(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 24;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
	}
}

fn yy36(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x01 ..= 0x08 |
		0x0A ..= 0x0C |
		0x0E ..= 0x1E |
		0x7F => {
			if st.yylimit <= st.yycursor {
				st.yystate = 25;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
		0x09 => {
			st.yycursor += 1;
			yy39(st)
		}
		0x0D => {
			st.yytm2 = st.yytm1;
			st.yytm2 = add_mtag(&mut st.mtag_trie, st.yytm2, st.yycursor);
			st.yycursor += 1;
			yy35(st)
		}
		_ => {
			st.yycursor += 1;
			yy36(st)
		}
	}
}

fn yy37(st: &mut ConState) -> ConStatus {
	st.yyaccept = 1;
	st.yymarker = st.yycursor;
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x09 |
		0x20 => {
			st.yytm1 = st.yytm2;
			st.yycursor += 1;
			yy33(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 26;
				return ConStatus::Waiting;
			} else {
				yy38(st)
			}
		}
	}
}

fn yy38(st: &mut ConState) -> ConStatus {
	st.f1 = st.yytm1;
	st.f2 = st.yytm3;
	st.yystate = -1;
	
        let mut folds: Vec::<String> = Vec::new();
        unwind(&mut st.mtag_trie, st.f1, st.f2, &st.yyinput, &mut folds);
        log!("folds: {:?}", folds);

        st.token = st.yycursor;
        return lex(st);

}

fn yy39(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x01 ..= 0x08 |
		0x0A ..= 0x0C |
		0x0E ..= 0x1E |
		0x7F => {
			if st.yylimit <= st.yycursor {
				st.yystate = 27;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
		0x09 => {
			st.yycursor += 1;
			yy39(st)
		}
		0x0D => {
			st.yycursor += 1;
			yy40(st)
		}
		0x20 => {
			st.yycursor += 1;
			yy36(st)
		}
		_ => {
			st.yycursor += 1;
			yy41(st)
		}
	}
}

fn yy40(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x0A => {
			st.yycursor += 1;
			yy42(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 28;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
	}
}

fn yy41(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x00 |
		0x01 ..= 0x08 |
		0x0A ..= 0x0C |
		0x0E ..= 0x1E |
		0x7F => {
			if st.yylimit <= st.yycursor {
				st.yystate = 29;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
		0x09 => {
			st.yycursor += 1;
			yy43(st)
		}
		0x0D => {
			st.yytm2 = st.yytm1;
			st.yytm2 = add_mtag(&mut st.mtag_trie, st.yytm2, st.yycursor);
			st.yycursor += 1;
			yy35(st)
		}
		_ => {
			st.yycursor += 1;
			yy36(st)
		}
	}
}

fn yy42(st: &mut ConState) -> ConStatus {
	yy38(st)
}

fn yy43(st: &mut ConState) -> ConStatus {
	let yych = unsafe {*st.yyinput.get_unchecked(st.yycursor)};
	match yych {
		0x09 |
		0x20 => {
			st.yycursor += 1;
			yy43(st)
		}
		0x0D => {
			st.yycursor += 1;
			yy40(st)
		}
		_ => {
			if st.yylimit <= st.yycursor {
				st.yystate = 30;
				return ConStatus::Waiting;
			} else {
				yy29(st)
			}
		}
	}
}

fn yy44(st: &mut ConState) -> ConStatus {
	st.yystate = -1;
	return ConStatus::End;
}

fn yyfnheader(st: &mut ConState) -> ConStatus {
	yy23(st)
}

fn yy0(st: &mut ConState) -> ConStatus {
	match st.yycond {
		YYC_media_type => yyfnmedia_type(st),
		YYC_header => yyfnheader(st),
		_ => panic!("internal lexer error"),
	}
}

fn lex(st: &mut ConState) -> ConStatus {
	match st.yystate {
		-1 => yy0(st),
		0 => {
			if st.yylimit <= st.yycursor {
				yy22(st)
			} else {
				yy1(st)
			}
		}
		1 => {
			if st.yylimit <= st.yycursor {
				yy3(st)
			} else {
				yy4(st)
			}
		}
		2 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy5(st)
			}
		}
		3 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy8(st)
			}
		}
		4 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy9(st)
			}
		}
		5 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy11(st)
			}
		}
		6 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy12(st)
			}
		}
		7 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy13(st)
			}
		}
		8 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy15(st)
			}
		}
		9 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy16(st)
			}
		}
		10 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy17(st)
			}
		}
		11 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy18(st)
			}
		}
		12 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy19(st)
			}
		}
		13 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy20(st)
			}
		}
		14 => {
			if st.yylimit <= st.yycursor {
				yy7(st)
			} else {
				yy21(st)
			}
		}
		15 => {
			if st.yylimit <= st.yycursor {
				yy44(st)
			} else {
				yy23(st)
			}
		}
		16 => {
			if st.yylimit <= st.yycursor {
				yy25(st)
			} else {
				yy26(st)
			}
		}
		17 => {
			if st.yylimit <= st.yycursor {
				yy25(st)
			} else {
				yy27(st)
			}
		}
		18 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy28(st)
			}
		}
		19 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy30(st)
			}
		}
		20 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy31(st)
			}
		}
		21 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy32(st)
			}
		}
		22 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy33(st)
			}
		}
		23 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy34(st)
			}
		}
		24 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy35(st)
			}
		}
		25 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy36(st)
			}
		}
		26 => {
			if st.yylimit <= st.yycursor {
				yy38(st)
			} else {
				yy37(st)
			}
		}
		27 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy39(st)
			}
		}
		28 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy40(st)
			}
		}
		29 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy41(st)
			}
		}
		30 => {
			if st.yylimit <= st.yycursor {
				yy29(st)
			} else {
				yy43(st)
			}
		}
		_ => panic!("internal lexer error"),
	}
}



fn test(packets: Vec<&[u8]>, expect: ConStatus) {
    // Create a "socket" (open the same file for reading and writing).
    let fname = "pipe";
    let mut fw: File = match File::create(fname) {
        Err(why) => panic!("cannot open {}: {}", fname, why),
        Ok(file) => file,
    };
    let fr: File = match File::open(fname) {
        Err(why) => panic!("cannot read file {}: {}", fname, why),
        Ok(file) => file,
    };

    // Initialize lexer state: `state` value is -1, all offsets are at the end
    // of buffer, the character at `yylimit` offset is the sentinel (null).
    let mut state = ConState {
        file: fr,
        yyinput: [0; CON_STATE_SIZE + 1], // sentinel (at `yylimit` offset) is set to null
        yycursor: CON_STATE_SIZE,
        yymarker: CON_STATE_SIZE,
        yylimit: CON_STATE_SIZE,
        token: CON_STATE_SIZE,
        yycond: YYC_media_type,
        yystate: -1,
        yyt1: NONE,
yyt2: NONE,

        yytm1: MTAG_ROOT,
yytm10: MTAG_ROOT,
yytm2: MTAG_ROOT,
yytm3: MTAG_ROOT,
yytm4: MTAG_ROOT,
yytm5: MTAG_ROOT,
yytm6: MTAG_ROOT,
yytm7: MTAG_ROOT,
yytm8: MTAG_ROOT,
yytm9: MTAG_ROOT,

        mtag_trie: Vec::new(),
        l1: NONE,
        l2: NONE,
        f1: MTAG_ROOT,
        f2: MTAG_ROOT,
        p1: MTAG_ROOT,
        p2: MTAG_ROOT,
        p3: MTAG_ROOT,
        p4: MTAG_ROOT,
        yyaccept: 0
    };

    // Main loop. The buffer contains incomplete data which appears packet by
    // packet. When the lexer needs more input it saves its internal state and
    // returns to the caller which should provide more input and resume lexing.
    let mut status;
    let mut send = 0;
    loop {
        status = lex(&mut state);
        if status == ConStatus::End {
            log!("done");
            break;
        } else if status == ConStatus::Waiting {
            log!("waiting...");
            if send < packets.len() {
                log!("sent packet {}", send);
                match fw.write_all(packets[send]) {
                    Err(why) => panic!("cannot write to {}: {}", fname, why),
                    Ok(_) => send += 1,
                }
            }
            status = fill(&mut state);
            log!("queue: '{}'", String::from_utf8_lossy(&state.yyinput));
            if status == ConStatus::BigPacket {
                log!("error: packet too big");
                break;
            }
            assert_eq!(status, ConStatus::Ready);
        } else {
            assert_eq!(status, ConStatus::BadPacket);
            log!("error: ill-formed packet");
            break;
        }
    }

    // Check results.
    assert_eq!(status, expect);

    // Cleanup: remove input file.
    match std::fs::remove_file(fname) {
        Err(why) => panic!("cannot remove {}: {}", fname, why),
        Ok(_) => {}
    }
}

fn main() {
    test(vec![], ConStatus::End);
    test(vec![b"ap", b"plication/j", b"son;", b" charset=\"", b"utf\\\"-8\"\r", b"\n", b""], ConStatus::End);
}
