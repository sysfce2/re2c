// Generated by re2js
// re2js $INPUT -o $OUTPUT

const assert = require('assert')

function parse(yyinput) {
    var yycursor = 0
    var yytm3 = []
var yytm4 = []
 // autogenerated tag variables
    
{
    var yych = 0
    var yystate = 0
    yyl: while (true) {
        switch (yystate) {
            case 0:
                yych = yyinput.charCodeAt(yycursor)
                switch (yych) {
                    case 0x30:
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                        yyt1 = yycursor;
                        yycursor += 1;
                        yystate = 3
                        continue yyl
                    default:
                        yycursor += 1;
                        yystate = 1
                        continue yyl
                }
            case 1:
                yystate = 2
                continue yyl
            case 2:
                { return null }
            case 3:
                yymarker = yycursor;
                yych = yyinput.charCodeAt(yycursor)
                switch (yych) {
                    case 0x00:
                        
                        
                        yyt2 = yycursor;
                        yycursor += 1;
                        yystate = 4
                        continue yyl
                    case 0x2E:
                        yyt2 = yycursor;
                        yycursor += 1;
                        yystate = 5
                        continue yyl
                    case 0x30:
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                        yycursor += 1;
                        yystate = 7
                        continue yyl
                    default:
                        yystate = 2
                        continue yyl
                }
            case 4:
                t1 = yyt1;
                t2 = yyt2;
                t3 = yytm3;
                t4 = yytm4;
                {
            var vers = [Number(yyinput.substring(t1, t2))]
            for (let i = 0; i < t3.length; ++i) {
                vers.push(Number(yyinput.substring(t3[i], t4[i])))
            }
            return vers
        }
            case 5:
                yych = yyinput.charCodeAt(yycursor)
                switch (yych) {
                    case 0x30:
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                        yytm3.push(yycursor)
                        yycursor += 1;
                        yystate = 8
                        continue yyl
                    default:
                        yystate = 6
                        continue yyl
                }
            case 6:
                yycursor = yymarker;
                yystate = 2
                continue yyl
            case 7:
                yych = yyinput.charCodeAt(yycursor)
                switch (yych) {
                    case 0x00:
                        
                        
                        yyt2 = yycursor;
                        yycursor += 1;
                        yystate = 4
                        continue yyl
                    case 0x2E:
                        yyt2 = yycursor;
                        yycursor += 1;
                        yystate = 5
                        continue yyl
                    case 0x30:
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                        yycursor += 1;
                        yystate = 7
                        continue yyl
                    default:
                        yystate = 6
                        continue yyl
                }
            case 8:
                yych = yyinput.charCodeAt(yycursor)
                switch (yych) {
                    case 0x00:
                        yytm4.push(yycursor)
                        yycursor += 1;
                        yystate = 4
                        continue yyl
                    case 0x2E:
                        yytm4.push(yycursor)
                        yycursor += 1;
                        yystate = 5
                        continue yyl
                    case 0x30:
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                        yycursor += 1;
                        yystate = 8
                        continue yyl
                    default:
                        yystate = 6
                        continue yyl
                }
            default:
                throw "internal lexer error"
        }
    }
}

}

assert.deepEqual(parse("1\0"), [1])
assert.deepEqual(parse("1.2.3.4.5.6.7\0"), [1, 2, 3, 4, 5, 6, 7])
assert.deepEqual(parse("1.2.\0"), null)
