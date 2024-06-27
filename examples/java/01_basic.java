// Generated by re2c
// re2java $INPUT -o $OUTPUT

class Main {
    static boolean lex(String yyinput) {
        int yycursor = 0;

        
{
    char yych = 0;
    int yystate = 0;
    yyl: while (true) {
        switch (yystate) {
            case 0:
                yych = yyinput.charAt(yycursor);
                yycursor += 1;
                switch (yych) {
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                        yystate = 2;
                        continue yyl;
                    default:
                        yystate = 1;
                        continue yyl;
                }
            case 1:
                { return false; }
            case 2:
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
                        yycursor += 1;
                        yystate = 2;
                        continue yyl;
                    default:
                        yystate = 3;
                        continue yyl;
                }
            case 3:
                { return true; }
            default:
                throw new IllegalStateException("internal lexer error");
        }
    }
}

    }

    public static void main(String []args) {
        assert lex("1234\0");
    }
};
