// Generated by re2js
// re2js $INPUT -o $OUTPUT

const fs = require('fs')

const BUFSIZE = 4096
const OK = 0
const EOF = 1
const LONG_LEXEME = 2
const YYMAXFILL = 1


function fill(st, need) {
    if (st.eof) return EOF

    // Error: lexeme too long. In real life could reallocate a larger buffer.
    if (st.token < need) return LONG_LEXEME

    // Shift buffer contents (discard everything up to the current token).
    st.yyinput.copy(st.yyinput, 0, st.token, st.yylimit)
    st.yycursor -= st.token;
    st.yylimit -= st.token;
    st.token = 0;

    // Read a new chunk of data from file and append it to `yyinput`.
    let want = BUFSIZE - st.yylimit - 1 // -1 for sentinel
    let nread = fs.readSync(st.file, st.yyinput, st.yylimit, want)
    st.yylimit += nread
    if (nread < want) {
        st.eof = true // end of file
        st.yyinput.write("\0".repeat(YYMAXFILL), st.yylimit)
        st.yylimit += YYMAXFILL
    }

    return OK
}

function lex(yyrecord, count) {
    loop: while (true) {
        yyrecord.token = yyrecord.yycursor
        
{
    let yych = 0
    let yystate = 0
    yyl: while (true) {
        switch (yystate) {
            case 0:
                if (yyrecord.yylimit <= yyrecord.yycursor) {
                    if (fill(yyrecord, 1) != OK) return -1;
                }
                yych = yyrecord.yyinput.readUInt8(yyrecord.yycursor)
                yyrecord.yycursor += 1;
                switch (yych) {
                    case 0x00:
                        yystate = 1
                        continue yyl
                    case 0x20:
                        yystate = 3
                        continue yyl
                    case 0x27:
                        yystate = 5
                        continue yyl
                    default:
                        yystate = 2
                        continue yyl
                }
            case 1:
                {
                // Check that it is the sentinel, not some unexpected null.
                return yyrecord.token == yyrecord.yylimit - YYMAXFILL ? count : -1
            }
            case 2:
                { return -1 }
            case 3:
                if (yyrecord.yylimit <= yyrecord.yycursor) {
                    if (fill(yyrecord, 1) != OK) return -1;
                }
                yych = yyrecord.yyinput.readUInt8(yyrecord.yycursor)
                switch (yych) {
                    case 0x20:
                        yyrecord.yycursor += 1;
                        yystate = 3
                        continue yyl
                    default:
                        yystate = 4
                        continue yyl
                }
            case 4:
                { continue loop }
            case 5:
                if (yyrecord.yylimit <= yyrecord.yycursor) {
                    if (fill(yyrecord, 1) != OK) return -1;
                }
                yych = yyrecord.yyinput.readUInt8(yyrecord.yycursor)
                yyrecord.yycursor += 1;
                switch (yych) {
                    case 0x27:
                        yystate = 6
                        continue yyl
                    case 0x5C:
                        yystate = 7
                        continue yyl
                    default:
                        yystate = 5
                        continue yyl
                }
            case 6:
                { count += 1; continue loop }
            case 7:
                if (yyrecord.yylimit <= yyrecord.yycursor) {
                    if (fill(yyrecord, 1) != OK) return -1;
                }
                yyrecord.yycursor += 1;
                yystate = 5
                continue yyl
            default:
                throw "internal lexer error"
        }
    }
}

    }
}

function main() {
    let fname = "input"

    // Create input file.
    let content = "'qu\0tes' 'are' 'fine: \\'' ".repeat(BUFSIZE)
    fs.writeFileSync(fname, content, function(err) { if (err) throw err; })

    // Init lexer state.
    let limit = BUFSIZE - 1 // exclude terminating null
    let st = {
        file: fs.openSync(fname, 'r'),
        yyinput: Buffer.alloc(BUFSIZE),
        yylimit: limit,
        yycursor: limit,
        token: limit,
        eof: false
    }

    // Run lexer on the prepared file.
    if (lex(st, 0) != 3 * BUFSIZE) { throw "error :[" }

    // Cleanup.
    fs.unlink(fname, function(err){ if (err) throw err; })
}

main()
