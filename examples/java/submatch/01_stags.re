// re2java $INPUT -o $OUTPUT

import java.util.Optional;

class Main {
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
        int t1, t2, t3, t4, t5;
        /*!stags:re2c format = "int @@ = -1;"; */

        /*!re2c
            re2c:define:YYCTYPE = "char";
            re2c:define:YYPEEK = "yyinput.charAt(yycursor)";
            re2c:yyfill:enable = 0;
            re2c:tags = 1;

            num = [0-9]+;

            @t1 num @t2 "." @t3 num @t4 ("." @t5 num)? [\x00] {
                int major = Integer.valueOf(yyinput.substring(t1, t2));
                int minor = Integer.valueOf(yyinput.substring(t3, t4));
                int patch = (t5 == -1) ? 0 : Integer.valueOf(yyinput.substring(t5, yycursor - 1));
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
