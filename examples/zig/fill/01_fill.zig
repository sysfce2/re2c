// Generated by re2zig
// re2zig $INPUT -o $OUTPUT

const std = @import("std");

const bufsize = 4095;

const State = struct {
    yyinput: [bufsize + 1]u8,
    yycursor: usize,
    yymarker: usize,
    yylimit: usize,
    token: usize,
    eof: bool
};

fn fill(st: *State, file: anytype) i32 {
    if (st.eof) { return -1; } // unexpected EOF

    // Error: lexeme too long. In real life can reallocate a larger buffer.
    if (st.token < 1) { return -2; }

    // Shift buffer contents (discard everything up to the current token).
    std.mem.copyBackwards(
        u8, st.yyinput[0..st.yylimit - st.token], st.yyinput[st.token..st.yylimit]);
    st.yycursor -= st.token;
    st.yymarker = @subWithOverflow(st.yymarker, st.token)[0];
    st.yylimit -= st.token;
    st.token = 0;

    // Fill free space at the end of buffer with new data from file.
    st.yylimit += file.read(st.yyinput[st.yylimit..bufsize]) catch 0;
    st.yyinput[st.yylimit] = 0; // append sentinel symbol

    // If read less than expected, this is the end of input.
    st.eof = st.yylimit < bufsize;

    return 0;
}

fn lex(yyrecord: *State, file: anytype) i32 {
    var count: i32 = 0;
    loop: while (true) {
        yyrecord.token = yyrecord.yycursor;
        
    var yych: u8 = 0;
    var yystate: u32 = 0;
    yyl: while (true) {
        switch (yystate) {
            0 => {
                yych = yyrecord.yyinput[yyrecord.yycursor];
                switch (yych) {
                    0x20 => {
                        yyrecord.yycursor += 1;
                        yystate = 3;
                        continue :yyl;
                    },
                    0x27 => {
                        yyrecord.yycursor += 1;
                        yystate = 5;
                        continue :yyl;
                    },
                    else => {
                        if (yyrecord.yylimit <= yyrecord.yycursor) {
                            if (fill(yyrecord, file) == 0) {
                                yystate = 0;
                                continue :yyl;
                            }
                            yystate = 10;
                            continue :yyl;
                        }
                        yyrecord.yycursor += 1;
                        yystate = 1;
                        continue :yyl;
                    },
                }
            },
            1 => {
                yystate = 2;
                continue :yyl;
            },
            2 => { return -1; },
            3 => {
                yych = yyrecord.yyinput[yyrecord.yycursor];
                switch (yych) {
                    0x20 => {
                        yyrecord.yycursor += 1;
                        yystate = 3;
                        continue :yyl;
                    },
                    else => {
                        if (yyrecord.yylimit <= yyrecord.yycursor) {
                            if (fill(yyrecord, file) == 0) {
                                yystate = 3;
                                continue :yyl;
                            }
                        }
                        yystate = 4;
                        continue :yyl;
                    },
                }
            },
            4 => { continue :loop; },
            5 => {
                yyrecord.yymarker = yyrecord.yycursor;
                yych = yyrecord.yyinput[yyrecord.yycursor];
                if (yych >= 0x01) {
                    yystate = 7;
                    continue :yyl;
                }
                if (yyrecord.yylimit <= yyrecord.yycursor) {
                    if (fill(yyrecord, file) == 0) {
                        yystate = 5;
                        continue :yyl;
                    }
                    yystate = 2;
                    continue :yyl;
                }
                yyrecord.yycursor += 1;
                yystate = 6;
                continue :yyl;
            },
            6 => {
                yych = yyrecord.yyinput[yyrecord.yycursor];
                yystate = 7;
                continue :yyl;
            },
            7 => {
                switch (yych) {
                    0x27 => {
                        yyrecord.yycursor += 1;
                        yystate = 8;
                        continue :yyl;
                    },
                    0x5C => {
                        yyrecord.yycursor += 1;
                        yystate = 9;
                        continue :yyl;
                    },
                    else => {
                        if (yyrecord.yylimit <= yyrecord.yycursor) {
                            if (fill(yyrecord, file) == 0) {
                                yystate = 6;
                                continue :yyl;
                            }
                            yystate = 11;
                            continue :yyl;
                        }
                        yyrecord.yycursor += 1;
                        yystate = 6;
                        continue :yyl;
                    },
                }
            },
            8 => { count += 1; continue :loop; },
            9 => {
                yych = yyrecord.yyinput[yyrecord.yycursor];
                if (yych <= 0x00) {
                    if (yyrecord.yylimit <= yyrecord.yycursor) {
                        if (fill(yyrecord, file) == 0) {
                            yystate = 9;
                            continue :yyl;
                        }
                        yystate = 11;
                        continue :yyl;
                    }
                    yyrecord.yycursor += 1;
                    yystate = 6;
                    continue :yyl;
                }
                yyrecord.yycursor += 1;
                yystate = 6;
                continue :yyl;
            },
            10 => { return count; },
            11 => {
                yyrecord.yycursor = yyrecord.yymarker;
                yystate = 2;
                continue :yyl;
            },
            else => { @panic("internal lexer error"); },
        }
    }

    }
}

test {
    const fname = "input";
    const content = "'qu\x00tes' 'are' 'fine: \\'' " ** bufsize;
    const count = 3 * bufsize; // number of quoted strings written to file

    // Prepare input file: a few times the size of the buffer, containing
    // strings with zeroes and escaped quotes.
    var fw = try std.fs.cwd().createFile(fname, .{});
    try fw.writeAll(content);
    fw.close();

    // Prepare lexer state: all offsets are at the end of buffer.
    var fr = try std.fs.cwd().openFile(fname, .{ .mode = .read_only});
    // Normally file would be part of the state struct, but BufferedReader type is unclear.
    var br = std.io.bufferedReader(fr.reader());
    var st = State{
        .yyinput = undefined,
        .yycursor = bufsize,
        .yymarker = bufsize,
        .yylimit = bufsize,
        .token = bufsize,
        .eof = false,
    };
    // Sentinel at `yylimit` offset is set to zero, which triggers YYFILL.
    st.yyinput[st.yylimit] = 0;

    // Run the lexer.
    try std.testing.expectEqual(lex(&st, &br), count);

    // Cleanup: remove input file.
    fr.close();
    try std.fs.cwd().deleteFile(fname);
}
