/* Generated by re2c */
#line 1 "encodings/unicode_group_Zs_u_encoding_policy_ignore.re"
// re2c $INPUT -o $OUTPUT -u --encoding-policy ignore
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Zs:
	
#line 14 "encodings/unicode_group_Zs_u_encoding_policy_ignore.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x00001FFF) {
		if (yych <= 0x0000009F) {
			if (yych == ' ') goto yy4;
		} else {
			if (yych <= 0x000000A0) goto yy4;
			if (yych == 0x00001680) goto yy4;
		}
	} else {
		if (yych <= 0x0000205E) {
			if (yych <= 0x0000200A) goto yy4;
			if (yych == 0x0000202F) goto yy4;
		} else {
			if (yych <= 0x0000205F) goto yy4;
			if (yych == 0x00003000) goto yy4;
		}
	}
	++YYCURSOR;
#line 14 "encodings/unicode_group_Zs_u_encoding_policy_ignore.re"
	{ return YYCURSOR == limit; }
#line 37 "encodings/unicode_group_Zs_u_encoding_policy_ignore.c"
yy4:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Zs_u_encoding_policy_ignore.re"
	{ goto Zs; }
#line 42 "encodings/unicode_group_Zs_u_encoding_policy_ignore.c"
}
#line 15 "encodings/unicode_group_Zs_u_encoding_policy_ignore.re"

}
static const unsigned int chars_Zs [] = {0x20,0x20,  0xa0,0xa0,  0x1680,0x1680,  0x2000,0x200a,  0x202f,0x202f,  0x205f,0x205f,  0x3000,0x3000,  0x0,0x0};
static unsigned int encode_utf32 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			*s++ = j;
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_Zs = new unsigned int [18];
	YYCTYPE * s = (YYCTYPE *) buffer_Zs;
	unsigned int buffer_len = encode_utf32 (chars_Zs, sizeof (chars_Zs) / sizeof (unsigned int), buffer_Zs);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Zs[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Zs' failed\n");
	delete [] buffer_Zs;
	return 0;
}
