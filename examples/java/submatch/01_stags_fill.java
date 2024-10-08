// Generated by re2java
// re2java $INPUT -o $OUTPUT

import java.io.*;
import java.nio.file.*;
import java.util.*;

class Lexer {
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

    public static final int BUFSIZE = 4096;

    private BufferedInputStream stream;
    private byte[] yyinput;
    private int yycursor;
    private int yymarker;
    private int yylimit;
    private int token;
    // Intermediate tag variables used by the lexer (must be autogenerated).
    private int yyt1;
private int yyt2;
private int yyt3;
private int yyt4;

    private boolean eof;

    public Lexer(File file) throws FileNotFoundException {
        stream = new BufferedInputStream(new FileInputStream(file));
        // Sentinel at `yylimit` offset is set to zero, which triggers YYFILL.
        yyinput = new byte[BUFSIZE + 1];
        yycursor = yymarker = yylimit = token = BUFSIZE;
        yyt1 = -1;
yyt2 = -1;
yyt3 = -1;
yyt4 = -1;

        eof = false;
    }

    private int fill() throws IOException {
        if (eof) { return -1; } // unexpected EOF

        // Error: lexeme too long. In real life can reallocate a larger buffer.
        if (token < 1) { return -2; }

        // Shift buffer contents (discard everything up to the current token).
        System.arraycopy(yyinput, token, yyinput, 0, yylimit - token); 
        yycursor -= token;
        yymarker -= token;
        yylimit -= token;
        if (yyt1 != -1) {yyt1 -= token;}
if (yyt2 != -1) {yyt2 -= token;}
if (yyt3 != -1) {yyt3 -= token;}
if (yyt4 != -1) {yyt4 -= token;}

        token = 0;

        // Fill free space at the end of buffer with new data from file.
        yylimit += stream.read(yyinput, yylimit, BUFSIZE - yylimit);
        yyinput[yylimit] = 0; // append sentinel symbol

        // If read less than expected, this is the end of input.
        eof = yylimit < BUFSIZE;

        return 0;
    }

    private int readInt(int tag1, int tag2) {
        int n = 0;
        for (int i = tag1; i < tag2; ++i) { n = n * 10 + (yyinput[i] - 48); }
        return n;
    }

    public Optional<ArrayList<SemVer>> lex() throws IOException {
        ArrayList<SemVer> vers = new ArrayList<SemVer>();

        // Final tag variables available in semantic action.
        int t1;int t2;int t3;int t4;int t5;

        loop: while (true) {
            token = yycursor;
            
{
    byte yych = 0;
    int yystate = 0;
    yyl: while (true) {
        switch (yystate) {
            case 0:
                yych = yyinput[yycursor];
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
                        if (yylimit <= yycursor) {
                            if (fill() == 0) {
                                yystate = 0;
                                continue yyl;
                            }
                            yystate = 11;
                            continue yyl;
                        }
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
                yych = yyinput[yycursor];
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
                        if (yylimit <= yycursor) {
                            if (fill() == 0) {
                                yystate = 3;
                                continue yyl;
                            }
                        }
                        yystate = 2;
                        continue yyl;
                }
            case 4:
                yych = yyinput[yycursor];
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
                        if (yylimit <= yycursor) {
                            if (fill() == 0) {
                                yystate = 4;
                                continue yyl;
                            }
                        }
                        yystate = 5;
                        continue yyl;
                }
            case 5:
                yycursor = yymarker;
                yystate = 2;
                continue yyl;
            case 6:
                yych = yyinput[yycursor];
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
                        if (yylimit <= yycursor) {
                            if (fill() == 0) {
                                yystate = 6;
                                continue yyl;
                            }
                        }
                        yystate = 5;
                        continue yyl;
                }
            case 7:
                yych = yyinput[yycursor];
                switch (yych) {
                    case 0x0A:
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
                        if (yylimit <= yycursor) {
                            if (fill() == 0) {
                                yystate = 7;
                                continue yyl;
                            }
                        }
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
                    int major = readInt(t1, t2);
                    int minor = readInt(t3, t4);
                    int patch = (t5 == -1) ? 0 : readInt(t5, yycursor - 1);
                    vers.add(new SemVer(major, minor, patch));
                    continue loop;
                }
            case 9:
                yych = yyinput[yycursor];
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
                        if (yylimit <= yycursor) {
                            if (fill() == 0) {
                                yystate = 9;
                                continue yyl;
                            }
                        }
                        yystate = 5;
                        continue yyl;
                }
            case 10:
                yych = yyinput[yycursor];
                switch (yych) {
                    case 0x0A:
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
                        if (yylimit <= yycursor) {
                            if (fill() == 0) {
                                yystate = 10;
                                continue yyl;
                            }
                        }
                        yystate = 5;
                        continue yyl;
                }
            case 11:
                { return Optional.of(vers); }
            default:
                throw new IllegalStateException("internal lexer error");
        }
    }
}

        }
    }

    public static void main(String []args) throws FileNotFoundException, IOException {
        String fname = "input";
        String content = "1.22.333\n".repeat(Lexer.BUFSIZE);

        // Prepare input file: a few times the size of the buffer, containing
        // strings with zeroes and escaped quotes.
        Files.writeString(Paths.get(fname), content);

        // Prepare lexer state: all offsets are at the end of buffer.
        File file = new File(".", fname);
        Lexer lexer = new Lexer(file);

        // Run the lexer.
        Optional<ArrayList<SemVer>> vers = lexer.lex();

        // Check resuts.
        assert vers.isPresent() && vers.get().size() == BUFSIZE;
        SemVer v = new SemVer(1, 22, 333);
        for (int i = 0; i < BUFSIZE; ++i) {
            assert vers.get().get(i).equals(v);
        }

        // Cleanup: remove input file.
        file.delete();
    }
};
