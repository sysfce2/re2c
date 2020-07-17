/* Generated by re2c */
#line 1 "encodings/unicode_group_Me_x_encoding_policy_fail.re"
// re2c $INPUT -o $OUTPUT -x --encoding-policy fail
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Me:
	
#line 14 "encodings/unicode_group_Me_x_encoding_policy_fail.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x20DC) {
		if (yych <= 0x0489) {
			if (yych >= 0x0488) goto yy4;
		} else {
			if (yych == 0x1ABE) goto yy4;
		}
	} else {
		if (yych <= 0x20E4) {
			if (yych != 0x20E1) goto yy4;
		} else {
			if (yych <= 0xA66F) goto yy2;
			if (yych <= 0xA672) goto yy4;
		}
	}
yy2:
	++YYCURSOR;
#line 14 "encodings/unicode_group_Me_x_encoding_policy_fail.re"
	{ return YYCURSOR == limit; }
#line 36 "encodings/unicode_group_Me_x_encoding_policy_fail.c"
yy4:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Me_x_encoding_policy_fail.re"
	{ goto Me; }
#line 41 "encodings/unicode_group_Me_x_encoding_policy_fail.c"
}
#line 15 "encodings/unicode_group_Me_x_encoding_policy_fail.re"

}
static const unsigned int chars_Me [] = {0x488,0x489,  0x1abe,0x1abe,  0x20dd,0x20e0,  0x20e2,0x20e4,  0xa670,0xa672,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_Me = new unsigned int [28];
	YYCTYPE * s = (YYCTYPE *) buffer_Me;
	unsigned int buffer_len = encode_utf16 (chars_Me, sizeof (chars_Me) / sizeof (unsigned int), buffer_Me);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Me[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Me' failed\n");
	delete [] buffer_Me;
	return 0;
}
