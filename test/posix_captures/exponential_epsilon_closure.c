/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures
// test for epsilon closure construction:
// exponential blowup if paths are not merged
// as soon as they arrive at the same NFA state

{
	YYCTYPE yych;
	yyt1 = YYCURSOR;
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt1;
	yypmatch[4] = yyt1;
	yypmatch[5] = yyt1;
	yypmatch[1] = YYCURSOR;
	{}
}

posix_captures/exponential_epsilon_closure.re:6:25: warning: rule matches empty string [-Wmatch-empty-string]
