/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures --dump-dfa-tagopt

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = yyt2 = YYCURSOR;
		goto yy3;
	default:
		yyt2 = yyt3 = NULL;
		yyt1 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = YYCURSOR;
		goto yy3;
	default:
		yyt3 = YYCURSOR;
		goto yy2;
	}
}

debug/dfa_tagopt.re:3:11: warning: rule matches empty string [-Wmatch-empty-string]
digraph DFA {
  rankdir=LR
  node[fontname=Courier]
  edge[arrowhead=vee fontname=Courier]

  n [shape=point]  n -> n0 [style=dotted label=""]
  n0 [height=0.2 width=0.2 label="0"]
subgraph { rank=same n0 [style=filled fillcolor=lightgray] dr0 [shape=none label="/1&uarr; 2&darr; 3&darr; (1 0 2 3)"] n0:s -> dr0:n [style=dotted minlen=0]}
  n0 -> n1 [label="1/1&uarr; 2&uarr; "]
  n1 [height=0.2 width=0.2 label="1"]
subgraph { rank=same n1 [style=filled fillcolor=lightgray] dr1 [shape=none label="/3&uarr; (1 0 2 3)"] n1:s -> dr1:n [style=dotted minlen=0]}
  n1 -> n1 [label="1/2&uarr; "]
}
