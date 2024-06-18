/* Generated by re2c */
#line 1 "d/submatch/02_mtags.re"
// re2d $INPUT -o $OUTPUT
module main;

enum MtagRoot = -1;

// An m-tag tree is a way to store histories with an O(1) copy operation.
// Histories naturally form a tree, as they have common start and fork at some
// point. The tree is stored as an array of pairs (tag value, link to parent).
// An m-tag is represented with a single link in the tree (array index).
struct Mtag {
    const(char)* elem; // tag value
    int pred; // index of the predecessor node or root
};

alias MtagTrie = Mtag[];
alias Ver = int[];

private int s2n(const(char)* s, const(char)* e) { // pre-parsed string to number
    int n = 0;
    for (; s < e; ++s) n = n * 10 + (*s - '0');
    return n;
}

// Append a single value to an m-tag history.
private void add_mtag(ref MtagTrie trie, ref int mtag, const(char)* value) {
    Mtag m = {value, mtag};
    mtag = cast(int)trie.length;
    trie ~= [m];
}

// Recursively unwind tag histories and collect version components.
private void unfold(const ref MtagTrie trie, int x, int y, ref Ver ver) {
    // Reached the root of the m-tag tree, stop recursion.
    if (x == MtagRoot && y == MtagRoot) return;

    // Unwind history further.
    unfold(trie, trie[x].pred, trie[y].pred, ver);

    // Get tag values. Tag histories must have equal length.
    assert(x != MtagRoot && y != MtagRoot);
    const(char)* ex = trie[x].elem, ey = trie[y].elem;

    if (ex != null && ey != null) {
        // Both tags are valid pointers, extract component.
        ver ~= [s2n(ex, ey)];
    } else {
        // Both tags are null (this corresponds to zero repetitions).
        assert(ex == null && ey == null);
    }
}

private bool parse(const(char)* str, ref Ver ver) {
    const(char)* yycursor = str, yymarker;
    MtagTrie mt;

    // User-defined tag variables that are available in semantic action.
    const(char)* t1, t2;
    int t3, t4;

    // Autogenerated tag variables used by the lexer to track tag values.
    
#line 65 "d/submatch/02_mtags.d"
const(char)* yyt1 = null;const(char)* yyt2 = null;
#line 61 "d/submatch/02_mtags.re"

    
#line 70 "d/submatch/02_mtags.d"
int yytm3 = MtagRoot;int yytm4 = MtagRoot;
#line 62 "d/submatch/02_mtags.re"


    
#line 76 "d/submatch/02_mtags.d"
{
	char yych;
	yych = *yycursor;
	switch (yych) {
		case '0': .. case '9':
			yyt1 = yycursor;
			goto yy3;
		default: goto yy1;
	}
yy1:
	++yycursor;
yy2:
#line 78 "d/submatch/02_mtags.re"
	{ return false; }
#line 91 "d/submatch/02_mtags.d"
yy3:
	yych = *(yymarker = ++yycursor);
	switch (yych) {
		case 0x00:
			add_mtag(mt, yytm4, null);
			add_mtag(mt, yytm3, null);
			yyt2 = yycursor;
			goto yy4;
		case '.':
			yyt2 = yycursor;
			goto yy5;
		case '0': .. case '9': goto yy7;
		default: goto yy2;
	}
yy4:
	++yycursor;
	t1 = yyt1;
	t2 = yyt2;
	t3 = yytm3;
	t4 = yytm4;
#line 72 "d/submatch/02_mtags.re"
	{
            ver = [];
            ver ~= [s2n(t1, t2)];
            unfold(mt, t3, t4, ver);
            return true;
        }
#line 119 "d/submatch/02_mtags.d"
yy5:
	yych = *++yycursor;
	switch (yych) {
		case '0': .. case '9':
			add_mtag(mt, yytm3, yycursor);
			goto yy8;
		default: goto yy6;
	}
yy6:
	yycursor = yymarker;
	goto yy2;
yy7:
	yych = *++yycursor;
	switch (yych) {
		case 0x00:
			add_mtag(mt, yytm4, null);
			add_mtag(mt, yytm3, null);
			yyt2 = yycursor;
			goto yy4;
		case '.':
			yyt2 = yycursor;
			goto yy5;
		case '0': .. case '9': goto yy7;
		default: goto yy6;
	}
yy8:
	yych = *++yycursor;
	switch (yych) {
		case 0x00:
			add_mtag(mt, yytm4, yycursor);
			goto yy4;
		case '.':
			add_mtag(mt, yytm4, yycursor);
			goto yy5;
		case '0': .. case '9': goto yy8;
		default: goto yy6;
	}
}
#line 79 "d/submatch/02_mtags.re"

}

void main() {
    Ver v;
    assert(parse("1", v) && v == [1]);
    assert(parse("1.2.3.4.5.6.7", v) && v == [1, 2, 3, 4, 5, 6, 7]);
    assert(!parse("1.2.", v));
}
