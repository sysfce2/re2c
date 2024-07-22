// Generated by re2js
// re2js $INPUT -o $OUTPUT -s

function lex(str) {
    var cur = 0
    
{
    var yych = 0
    var yystate = 0
    yyl: while (true) {
        switch (yystate) {
            case 0:
                yych = str.charCodeAt(cur)
                cur += 1
                if (yych <= 0x30) {
                    yystate = 1
                    continue yyl
                }
                if (yych <= 0x39) {
                    yystate = 2
                    continue yyl
                }
                yystate = 1
                continue yyl
            case 1:
                { return false }
            case 2:
                yych = str.charCodeAt(cur)
                if (yych <= 0x2F) {
                    yystate = 3
                    continue yyl
                }
                if (yych <= 0x39) {
                    cur += 1
                    yystate = 2
                    continue yyl
                }
                yystate = 3
                continue yyl
            case 3:
                { return true }
            default:
                throw "internal lexer error"
        }
    }
}

}

if (!lex("1234\0")) {
    throw "error!"
}
