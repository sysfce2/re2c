/* Generated by re2c */
#line 1 "encodings/default_full_w_encoding_policy_substitute.re"
// re2c $INPUT -o $OUTPUT -w --encoding-policy substitute

#line 6 "encodings/default_full_w_encoding_policy_substitute.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0xD7FF) goto yy2;
	if (yych <= 0xDFFF) goto yy4;
yy2:
	++YYCURSOR;
#line 4 "encodings/default_full_w_encoding_policy_substitute.re"
	{ return FULL; }
#line 17 "encodings/default_full_w_encoding_policy_substitute.c"
yy4:
	++YYCURSOR;
#line 3 "encodings/default_full_w_encoding_policy_substitute.re"
	{ return DEFAULT; }
#line 22 "encodings/default_full_w_encoding_policy_substitute.c"
}
#line 5 "encodings/default_full_w_encoding_policy_substitute.re"

