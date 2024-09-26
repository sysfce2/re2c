// re2js $INPUT -o $OUTPUT

const assert = require('assert');

function parse(yyinput) {
    let yycursor = 0

    // Final tag variables available in semantic action.
    /*!svars:re2c format = "let @@\n"; */

    // Intermediate tag variables used by the lexer (must be autogenerated).
    /*!stags:re2c format = "let @@\n"; */

    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:captvars = 1;

        num = [0-9]+;

        (num) "." (num) ("." num)? [\x00] {
            return {
                major: Number(yyinput.substring(yytl1, yytr1)),
                minor: Number(yyinput.substring(yytl2, yytr2)),
                patch: yytl3 == -1 ? 0 : Number(yyinput.substring(yytl3 + 1, yytr3))
            }
        }
        * { return null }
    */
}

assert.deepEqual(parse("23.34\0"), {major: 23, minor: 34, patch: 0})
assert.deepEqual(parse("1.2.99999\0"), {major: 1, minor: 2, patch: 99999})
assert.deepEqual(parse("1.a\0"), null)