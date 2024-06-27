// re2java $INPUT -o $OUTPUT

import java.util.Optional;

class Main {
    // Maximum number of capturing groups among all rules.
    /*!maxnmatch:re2c*/

    static class SemVer {
        int major;
        int minor;
        int patch;

        public SemVer(int m, int n, int k) {
            major = m;
            minor = n;
            patch = k;
        }

        public boolean equals(SemVer v) {
            return major == v.major && minor == v.minor && patch == v.patch;
        }
    };

    static Optional<SemVer> parse(String yyinput) {
        int yycursor = 0;
        int yymarker = 0;

        // Array for capturing parentheses (twice the number of groups).
        int yynmatch;
        int[] yypmatch = new int[YYMAXNMATCH * 2];
        /*!stags:re2c format = "int @@ = -1;"; */

        /*!re2c
            re2c:define:YYCTYPE = "char";
            re2c:define:YYPEEK = "yyinput.charAt(yycursor)";
            re2c:yyfill:enable = 0;
            re2c:posix-captures = 1;

            num = [0-9]+;

            (num) "." (num) ("." num)? [\x00] {
                // `yynmatch` is the number of capturing groups
                assert yynmatch == 4;

                // Even `yypmatch` values are for opening parentheses, odd values
                // are for closing parentheses, the first group is the whole match.
                int major = Integer.valueOf(yyinput.substring(yypmatch[2], yypmatch[3]));
                int minor = Integer.valueOf(yyinput.substring(yypmatch[4], yypmatch[5]));
                int patch = (yypmatch[6] == -1) ? 0
                        : Integer.valueOf(yyinput.substring(yypmatch[6] + 1, yypmatch[7]));
                return Optional.of(new SemVer(major, minor, patch));
            }
            * { return Optional.empty(); }
        */
    }

    public static void main(String []args) {
        assert parse("23.34\0").get().equals(new SemVer(23, 34, 0));
        assert parse("1.2.99999\0").get().equals(new SemVer(1, 2, 99999));
        assert !parse("1.a\0").isPresent();
    }
};
