// Generated by re2java
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
        int yyt1 = -1;int yyt2 = -1;int yyt3 = -1;int yyt4 = -1;

        
{
    char yych = 0;
    int yystate = 0;
    yyl: while (true) {
        switch (yystate) {
            case 0:
                yych = yyinput.charAt(yycursor);
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
                        yystate = 3;
                        continue yyl;
                    default:
                        yycursor += 1;
                        yystate = 1;
                        continue yyl;
                }
            case 1:
                yystate = 2;
                continue yyl;
            case 2:
                { return Optional.empty(); }
            case 3:
                yymarker = yycursor;
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x2E:
                        yycursor += 1;
                        yystate = 4;
                        continue yyl;
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
                        yystate = 6;
                        continue yyl;
                    default:
                        yystate = 2;
                        continue yyl;
                }
            case 4:
                yych = yyinput.charAt(yycursor);
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
                        yyt2 = yycursor;
                        yycursor += 1;
                        yystate = 7;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 5:
                yycursor = yymarker;
                yystate = 2;
                continue yyl;
            case 6:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x2E:
                        yycursor += 1;
                        yystate = 4;
                        continue yyl;
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
                        yystate = 6;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 7:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x00:
                        yyt3 = yycursor;
                        yyt4 = -1;
                        yycursor += 1;
                        yystate = 8;
                        continue yyl;
                    case 0x2E:
                        yyt3 = yycursor;
                        yycursor += 1;
                        yystate = 9;
                        continue yyl;
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
                        yystate = 7;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 8:
                t1 = yyt1;
                t3 = yyt2;
                t4 = yyt3;
                t5 = yyt4;
                t2 = yyt2;
                t2 -= 1;
                {
                int major = Integer.valueOf(yyinput.substring(t1, t2));
                int minor = Integer.valueOf(yyinput.substring(t3, t4));
                int patch = (t5 == -1) ? 0 : Integer.valueOf(yyinput.substring(t5, yycursor - 1));
                return Optional.of(new SemVer(major, minor, patch));
            }
            case 9:
                yych = yyinput.charAt(yycursor);
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
                        yyt4 = yycursor;
                        yycursor += 1;
                        yystate = 10;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 10:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x00:
                        yycursor += 1;
                        yystate = 8;
                        continue yyl;
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
                        yystate = 10;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            default:
                throw new IllegalStateException("internal lexer error");
        }
    }
}

    }

    public static void main(String []args) {
        assert parse("23.34\0").get().equals(new SemVer(23, 34, 0));
        assert parse("1.2.99999\0").get().equals(new SemVer(1, 2, 99999));
        assert !parse("1.a\0").isPresent();
    }
};
