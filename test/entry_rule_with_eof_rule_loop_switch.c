/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --loop-switch


{
	YYCTYPE yych;
	unsigned int yystate = 0;
	for (;;) {
		switch (yystate) {
			case 0:
				{ /* init ... */ }
				yystate = 1;
				continue;
			case 1:
				yych = *YYCURSOR;
				if (yych >= 0x01) {
					++YYCURSOR;
					yystate = 2;
					continue;
				}
				if (YYLIMIT <= YYCURSOR) {
					if (YYFILL() == 0) {
						yystate = 1;
						continue;
					}
					yystate = 3;
					continue;
				}
				++YYCURSOR;
				yystate = 2;
				continue;
			case 2: { return ^; }
			case 3: { return $; }
		}
	}
}
