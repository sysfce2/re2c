// Generated by re2java
// re2java $INPUT -o $OUTPUT




class Main {
    enum Num {INT, FLOAT, NAN};

    static Num lex(String yyinput) {
        int yycursor = 0;
        int yymarker = 0;

        
{
    char yych = 0;
    int yyaccept = 0;
    int yystate = 0;
    yyl: while (true) {
        switch (yystate) {
            case 0:
                yych = yyinput.charAt(yycursor);
                yycursor += 1;
                switch (yych) {
                    case 0x2E:
                        yystate = 3;
                        continue yyl;
                    case 0x30:
                        yystate = 4;
                        continue yyl;
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                        yystate = 5;
                        continue yyl;
                    default:
                        yystate = 1;
                        continue yyl;
                }
            case 1:
                yystate = 2;
                continue yyl;
            case 2:
                { return Num.NAN; }
            case 3:
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
                        yystate = 7;
                        continue yyl;
                    default:
                        yystate = 2;
                        continue yyl;
                }
            case 4:
                yyaccept = 0;
                yymarker = yycursor;
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x2E:
                        yycursor += 1;
                        yystate = 7;
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
                        yystate = 9;
                        continue yyl;
                    case 0x45:
                    case 0x65:
                        yycursor += 1;
                        yystate = 11;
                        continue yyl;
                    default:
                        yystate = 2;
                        continue yyl;
                }
            case 5:
                yyaccept = 1;
                yymarker = yycursor;
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x2E:
                        yycursor += 1;
                        yystate = 7;
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
                        yystate = 5;
                        continue yyl;
                    case 0x45:
                    case 0x65:
                        yycursor += 1;
                        yystate = 11;
                        continue yyl;
                    default:
                        yystate = 6;
                        continue yyl;
                }
            case 6:
                { return Num.INT; }
            case 7:
                yyaccept = 2;
                yymarker = yycursor;
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
                        yystate = 7;
                        continue yyl;
                    case 0x45:
                    case 0x65:
                        yycursor += 1;
                        yystate = 11;
                        continue yyl;
                    default:
                        yystate = 8;
                        continue yyl;
                }
            case 8:
                { return Num.FLOAT; }
            case 9:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x2E:
                        yycursor += 1;
                        yystate = 7;
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
                        yystate = 9;
                        continue yyl;
                    case 0x45:
                    case 0x65:
                        yycursor += 1;
                        yystate = 11;
                        continue yyl;
                    default:
                        yystate = 10;
                        continue yyl;
                }
            case 10:
                yycursor = yymarker;
                switch (yyaccept) {
                    case 0:
                        yystate = 2;
                        continue yyl;
                    case 1:
                        yystate = 6;
                        continue yyl;
                    default:
                        yystate = 8;
                        continue yyl;
                }
            case 11:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x2B:
                    case 0x2D:
                        yycursor += 1;
                        yystate = 12;
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
                        yystate = 13;
                        continue yyl;
                    default:
                        yystate = 10;
                        continue yyl;
                }
            case 12:
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
                        yystate = 13;
                        continue yyl;
                    default:
                        yystate = 10;
                        continue yyl;
                }
            case 13:
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
                        yystate = 13;
                        continue yyl;
                    default:
                        yystate = 8;
                        continue yyl;
                }
            default:
                throw new IllegalStateException("internal lexer error");
        }
    }
}

    }

    public static void main(String []args) {
        assert lex("123\0") == Num.INT;
        assert lex("123.4567\0") == Num.FLOAT;
    }
};
