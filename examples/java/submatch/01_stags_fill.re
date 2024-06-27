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
    /*!stags:re2c format = "private int @@;\n"; */
    private boolean eof;

    public Lexer(File file) throws FileNotFoundException {
        stream = new BufferedInputStream(new FileInputStream(file));
        // Sentinel at `yylimit` offset is set to zero, which triggers YYFILL.
        yyinput = new byte[BUFSIZE + 1];
        yycursor = yymarker = yylimit = token = BUFSIZE;
        /*!stags:re2c format = "@@ = -1;\n"; */
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
        /*!stags:re2c format = "if (@@ != -1) {@@ -= token;}\n"; */
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
        int t1, t2, t3, t4, t5;

        loop: while (true) {
            token = yycursor;
            /*!re2c
                re2c:define:YYCTYPE = "byte";
                re2c:define:YYPEEK = "yyinput[yycursor]";
                re2c:define:YYFILL = "fill() == 0";
                re2c:eof = 0;
                re2c:tags = 1;

                num = [0-9]+;

                @t1 num @t2 "." @t3 num @t4 ("." @t5 num)? [\n] {
                    int major = readInt(t1, t2);
                    int minor = readInt(t3, t4);
                    int patch = (t5 == -1) ? 0 : readInt(t5, yycursor - 1);
                    vers.add(new SemVer(major, minor, patch));
                    continue loop;
                }
                $ { return Optional.of(vers); }
                * { return Optional.empty(); }
            */
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
