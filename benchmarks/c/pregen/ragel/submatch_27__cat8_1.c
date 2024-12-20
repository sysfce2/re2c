#line 1 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
#include "ragel/common.c"

const char *delim = "\n";


#line 29 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"



#line 9 "gen/ragel/submatch_27__cat8_1.c"
static const int abcd_start = 73;
static const int abcd_first_final = 73;
static const int abcd_error = 0;

static const int abcd_en_main = 73;


#line 31 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"


static void lex(Input *in, Output *out)
{
	char *p = in->p;
	char *pe = in->pe;
	const char
	*a0, *a1, *a2, *a3, *a4, *a5, *a6, *a7,
	*b0, *b1, *b2, *b3, *b4, *b5, *b6, *b7;
	int cs;
	

#line 27 "gen/ragel/submatch_27__cat8_1.c"
	{
		cs = (int)abcd_start;
	}
	
#line 42 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"


#line 32 "gen/ragel/submatch_27__cat8_1.c"
{
		switch ( cs ) {
			case 73:
			goto st_case_73;
			case 0:
			goto st_case_0;
			case 1:
			goto st_case_1;
			case 2:
			goto st_case_2;
			case 3:
			goto st_case_3;
			case 4:
			goto st_case_4;
			case 5:
			goto st_case_5;
			case 6:
			goto st_case_6;
			case 7:
			goto st_case_7;
			case 8:
			goto st_case_8;
			case 9:
			goto st_case_9;
			case 10:
			goto st_case_10;
			case 11:
			goto st_case_11;
			case 12:
			goto st_case_12;
			case 13:
			goto st_case_13;
			case 14:
			goto st_case_14;
			case 15:
			goto st_case_15;
			case 16:
			goto st_case_16;
			case 17:
			goto st_case_17;
			case 18:
			goto st_case_18;
			case 19:
			goto st_case_19;
			case 20:
			goto st_case_20;
			case 21:
			goto st_case_21;
			case 22:
			goto st_case_22;
			case 23:
			goto st_case_23;
			case 24:
			goto st_case_24;
			case 25:
			goto st_case_25;
			case 26:
			goto st_case_26;
			case 27:
			goto st_case_27;
			case 28:
			goto st_case_28;
			case 29:
			goto st_case_29;
			case 30:
			goto st_case_30;
			case 31:
			goto st_case_31;
			case 32:
			goto st_case_32;
			case 33:
			goto st_case_33;
			case 34:
			goto st_case_34;
			case 35:
			goto st_case_35;
			case 36:
			goto st_case_36;
			case 37:
			goto st_case_37;
			case 38:
			goto st_case_38;
			case 39:
			goto st_case_39;
			case 40:
			goto st_case_40;
			case 41:
			goto st_case_41;
			case 42:
			goto st_case_42;
			case 43:
			goto st_case_43;
			case 44:
			goto st_case_44;
			case 45:
			goto st_case_45;
			case 46:
			goto st_case_46;
			case 47:
			goto st_case_47;
			case 48:
			goto st_case_48;
			case 49:
			goto st_case_49;
			case 50:
			goto st_case_50;
			case 51:
			goto st_case_51;
			case 52:
			goto st_case_52;
			case 53:
			goto st_case_53;
			case 54:
			goto st_case_54;
			case 55:
			goto st_case_55;
			case 56:
			goto st_case_56;
			case 57:
			goto st_case_57;
			case 58:
			goto st_case_58;
			case 59:
			goto st_case_59;
			case 60:
			goto st_case_60;
			case 61:
			goto st_case_61;
			case 62:
			goto st_case_62;
			case 63:
			goto st_case_63;
			case 64:
			goto st_case_64;
			case 65:
			goto st_case_65;
			case 66:
			goto st_case_66;
			case 67:
			goto st_case_67;
			case 68:
			goto st_case_68;
			case 69:
			goto st_case_69;
			case 70:
			goto st_case_70;
			case 71:
			goto st_case_71;
			case 72:
			goto st_case_72;
		}
		_ctr23:
			{
#line 17 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			
			outs(out, a0, b0); outc(out, '.'); outs(out, b0, a1); outc(out, '.');
			outs(out, a1, b1); outc(out, '.'); outs(out, b1, a2); outc(out, '.');
			outs(out, a2, b2); outc(out, '.'); outs(out, b2, a3); outc(out, '.');
			outs(out, a3, b3); outc(out, '.'); outs(out, b3, a4); outc(out, '.');
			outs(out, a4, b4); outc(out, '.'); outs(out, b4, a5); outc(out, '.');
			outs(out, a5, b5); outc(out, '.'); outs(out, b5, a6); outc(out, '.');
			outs(out, a6, b6); outc(out, '.'); outs(out, b6, a7); outc(out, '.');
			outs(out, a7, b7); outc(out, '.'); outs(out, b7, p + 1);
		}
		
#line 197 "gen/ragel/submatch_27__cat8_1.c"

		goto _st73;
		_st73:
		p+= 1;
		st_case_73:
		if ( p == pe )
			goto _out73;
		if ( ( (*( p))) == 97 ) {
			goto _ctr132;
		}
		goto _st0;
		_st0:
		st_case_0:
		goto _out0;
		_ctr132:
			{
#line 9 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a0 = p; }
		
#line 216 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 9 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b0 = p; }
		
#line 221 "gen/ragel/submatch_27__cat8_1.c"

		goto _st1;
		_st1:
		p+= 1;
		st_case_1:
		if ( p == pe )
			goto _out1;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr2;
			}
			case 98: {
				goto _st60;
			}
		}
		goto _st0;
		_ctr2:
			{
#line 9 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b0 = p; }
		
#line 242 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 247 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 252 "gen/ragel/submatch_27__cat8_1.c"

		goto _st2;
		_st2:
		p+= 1;
		st_case_2:
		if ( p == pe )
			goto _out2;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr5;
			}
			case 98: {
				goto _st49;
			}
		}
		goto _st0;
		_ctr5:
			{
#line 9 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b0 = p; }
		
#line 273 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 278 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 283 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 288 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 293 "gen/ragel/submatch_27__cat8_1.c"

		goto _st3;
		_st3:
		p+= 1;
		st_case_3:
		if ( p == pe )
			goto _out3;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr8;
			}
			case 98: {
				goto _st40;
			}
		}
		goto _st0;
		_ctr8:
			{
#line 9 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b0 = p; }
		
#line 314 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 319 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 324 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 329 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 334 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 339 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 344 "gen/ragel/submatch_27__cat8_1.c"

		goto _st4;
		_st4:
		p+= 1;
		st_case_4:
		if ( p == pe )
			goto _out4;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr11;
			}
			case 98: {
				goto _st33;
			}
		}
		goto _st0;
		_ctr11:
			{
#line 9 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b0 = p; }
		
#line 365 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 370 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 375 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 380 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 385 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 390 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 395 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 400 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 405 "gen/ragel/submatch_27__cat8_1.c"

		goto _st5;
		_st5:
		p+= 1;
		st_case_5:
		if ( p == pe )
			goto _out5;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr14;
			}
			case 98: {
				goto _st28;
			}
		}
		goto _st0;
		_ctr14:
			{
#line 9 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b0 = p; }
		
#line 426 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 431 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 436 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 441 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 446 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 451 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 456 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 461 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 466 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 471 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 476 "gen/ragel/submatch_27__cat8_1.c"

		goto _st6;
		_st6:
		p+= 1;
		st_case_6:
		if ( p == pe )
			goto _out6;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr17;
			}
			case 98: {
				goto _st25;
			}
		}
		goto _st0;
		_ctr17:
			{
#line 9 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b0 = p; }
		
#line 497 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 502 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 507 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 512 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 517 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 522 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 527 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 532 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 537 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 542 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 547 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 552 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 557 "gen/ragel/submatch_27__cat8_1.c"

		goto _st7;
		_st7:
		p+= 1;
		st_case_7:
		if ( p == pe )
			goto _out7;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr20;
			}
			case 98: {
				goto _st24;
			}
		}
		goto _st0;
		_ctr20:
			{
#line 9 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b0 = p; }
		
#line 578 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 583 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 588 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 593 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 598 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 603 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 608 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 613 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 618 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 623 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 628 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 633 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 638 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 643 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 648 "gen/ragel/submatch_27__cat8_1.c"

		goto _st8;
		_st8:
		p+= 1;
		st_case_8:
		if ( p == pe )
			goto _out8;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr20;
			}
			case 98: {
				goto _st9;
			}
		}
		goto _st0;
		_st9:
		p+= 1;
		st_case_9:
		if ( p == pe )
			goto _out9;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr25;
			}
			case 98: {
				goto _st9;
			}
		}
		goto _st0;
		_ctr25:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 689 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 694 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 699 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 704 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 709 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 714 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 719 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 724 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 729 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 734 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 739 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 744 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 749 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 754 "gen/ragel/submatch_27__cat8_1.c"

		goto _st10;
		_ctr27:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 761 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 766 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 771 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 776 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 781 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 786 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 791 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 796 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 801 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 806 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 811 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 816 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 821 "gen/ragel/submatch_27__cat8_1.c"

		goto _st10;
		_st10:
		p+= 1;
		st_case_10:
		if ( p == pe )
			goto _out10;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr27;
			}
			case 98: {
				goto _st11;
			}
		}
		goto _st0;
		_st11:
		p+= 1;
		st_case_11:
		if ( p == pe )
			goto _out11;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr29;
			}
			case 98: {
				goto _st11;
			}
		}
		goto _st0;
		_ctr29:
			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 862 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 867 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 872 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 877 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 882 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 887 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 892 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 897 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 902 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 907 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 912 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 917 "gen/ragel/submatch_27__cat8_1.c"

		goto _st12;
		_ctr31:
			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 924 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 929 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 934 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 939 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 944 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 949 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 954 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 959 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 964 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 969 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 974 "gen/ragel/submatch_27__cat8_1.c"

		goto _st12;
		_st12:
		p+= 1;
		st_case_12:
		if ( p == pe )
			goto _out12;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr31;
			}
			case 98: {
				goto _st13;
			}
		}
		goto _st0;
		_st13:
		p+= 1;
		st_case_13:
		if ( p == pe )
			goto _out13;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr33;
			}
			case 98: {
				goto _st13;
			}
		}
		goto _st0;
		_ctr33:
			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 1015 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 1020 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 1025 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 1030 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 1035 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1040 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 1045 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1050 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 1055 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 1060 "gen/ragel/submatch_27__cat8_1.c"

		goto _st14;
		_ctr35:
			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 1067 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 1072 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 1077 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 1082 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1087 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 1092 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1097 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 1102 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 1107 "gen/ragel/submatch_27__cat8_1.c"

		goto _st14;
		_st14:
		p+= 1;
		st_case_14:
		if ( p == pe )
			goto _out14;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr35;
			}
			case 98: {
				goto _st15;
			}
		}
		goto _st0;
		_st15:
		p+= 1;
		st_case_15:
		if ( p == pe )
			goto _out15;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr37;
			}
			case 98: {
				goto _st15;
			}
		}
		goto _st0;
		_ctr37:
			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 1148 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 1153 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 1158 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1163 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 1168 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1173 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 1178 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 1183 "gen/ragel/submatch_27__cat8_1.c"

		goto _st16;
		_ctr39:
			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 1190 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 1195 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1200 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 1205 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1210 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 1215 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 1220 "gen/ragel/submatch_27__cat8_1.c"

		goto _st16;
		_st16:
		p+= 1;
		st_case_16:
		if ( p == pe )
			goto _out16;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr39;
			}
			case 98: {
				goto _st17;
			}
		}
		goto _st0;
		_st17:
		p+= 1;
		st_case_17:
		if ( p == pe )
			goto _out17;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr41;
			}
			case 98: {
				goto _st17;
			}
		}
		goto _st0;
		_ctr41:
			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 1261 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1266 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 1271 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1276 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 1281 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 1286 "gen/ragel/submatch_27__cat8_1.c"

		goto _st18;
		_ctr43:
			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1293 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 1298 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1303 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 1308 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 1313 "gen/ragel/submatch_27__cat8_1.c"

		goto _st18;
		_st18:
		p+= 1;
		st_case_18:
		if ( p == pe )
			goto _out18;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr43;
			}
			case 98: {
				goto _st19;
			}
		}
		goto _st0;
		_st19:
		p+= 1;
		st_case_19:
		if ( p == pe )
			goto _out19;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr45;
			}
			case 98: {
				goto _st19;
			}
		}
		goto _st0;
		_ctr45:
			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 1354 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1359 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 1364 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 1369 "gen/ragel/submatch_27__cat8_1.c"

		goto _st20;
		_ctr47:
			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1376 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 1381 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 1386 "gen/ragel/submatch_27__cat8_1.c"

		goto _st20;
		_st20:
		p+= 1;
		st_case_20:
		if ( p == pe )
			goto _out20;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr47;
			}
			case 98: {
				goto _st21;
			}
		}
		goto _st0;
		_st21:
		p+= 1;
		st_case_21:
		if ( p == pe )
			goto _out21;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr49;
			}
			case 98: {
				goto _st21;
			}
		}
		goto _st0;
		_ctr49:
			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a7 = p; }
		
#line 1427 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 1432 "gen/ragel/submatch_27__cat8_1.c"

		goto _st22;
		_ctr51:
			{
#line 16 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b7 = p; }
		
#line 1439 "gen/ragel/submatch_27__cat8_1.c"

		goto _st22;
		_st22:
		p+= 1;
		st_case_22:
		if ( p == pe )
			goto _out22;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 97: {
				goto _ctr51;
			}
			case 98: {
				goto _st23;
			}
		}
		goto _st0;
		_st23:
		p+= 1;
		st_case_23:
		if ( p == pe )
			goto _out23;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr23;
			}
			case 98: {
				goto _st23;
			}
		}
		goto _st0;
		_st24:
		p+= 1;
		st_case_24:
		if ( p == pe )
			goto _out24;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr25;
			}
			case 98: {
				goto _st24;
			}
		}
		goto _st0;
		_st25:
		p+= 1;
		st_case_25:
		if ( p == pe )
			goto _out25;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr53;
			}
			case 98: {
				goto _st25;
			}
		}
		goto _st0;
		_ctr53:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 1505 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 1510 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 1515 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 1520 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 1525 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 1530 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 1535 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 1540 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 1545 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1550 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 1555 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1560 "gen/ragel/submatch_27__cat8_1.c"

		goto _st26;
		_ctr58:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 1567 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 1572 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 1577 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 1582 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 1587 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 1592 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 1597 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 1602 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1607 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 1612 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1617 "gen/ragel/submatch_27__cat8_1.c"

		goto _st26;
		_st26:
		p+= 1;
		st_case_26:
		if ( p == pe )
			goto _out26;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr27;
			}
			case 98: {
				goto _st27;
			}
		}
		goto _st0;
		_st27:
		p+= 1;
		st_case_27:
		if ( p == pe )
			goto _out27;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr29;
			}
			case 98: {
				goto _st27;
			}
		}
		goto _st0;
		_st28:
		p+= 1;
		st_case_28:
		if ( p == pe )
			goto _out28;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr56;
			}
			case 98: {
				goto _st28;
			}
		}
		goto _st0;
		_ctr56:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 1666 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 1671 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 1676 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 1681 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 1686 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 1691 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 1696 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 1701 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 1706 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1711 "gen/ragel/submatch_27__cat8_1.c"

		goto _st29;
		_ctr65:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 1718 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 1723 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 1728 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 1733 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 1738 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 1743 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 1748 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 1753 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1758 "gen/ragel/submatch_27__cat8_1.c"

		goto _st29;
		_st29:
		p+= 1;
		st_case_29:
		if ( p == pe )
			goto _out29;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr58;
			}
			case 98: {
				goto _st30;
			}
		}
		goto _st0;
		_st30:
		p+= 1;
		st_case_30:
		if ( p == pe )
			goto _out30;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr60;
			}
			case 98: {
				goto _st30;
			}
		}
		goto _st0;
		_ctr60:
			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 1793 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 1798 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 1803 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 1808 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 1813 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 1818 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 1823 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1828 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 1833 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1838 "gen/ragel/submatch_27__cat8_1.c"

		goto _st31;
		_ctr69:
			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 1845 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 1850 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 1855 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 1860 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 1865 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 1870 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 1875 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 1880 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 1885 "gen/ragel/submatch_27__cat8_1.c"

		goto _st31;
		_st31:
		p+= 1;
		st_case_31:
		if ( p == pe )
			goto _out31;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr31;
			}
			case 98: {
				goto _st32;
			}
		}
		goto _st0;
		_st32:
		p+= 1;
		st_case_32:
		if ( p == pe )
			goto _out32;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr33;
			}
			case 98: {
				goto _st32;
			}
		}
		goto _st0;
		_st33:
		p+= 1;
		st_case_33:
		if ( p == pe )
			goto _out33;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr63;
			}
			case 98: {
				goto _st33;
			}
		}
		goto _st0;
		_ctr63:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 1934 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 1939 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 1944 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 1949 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 1954 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 1959 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 1964 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 1969 "gen/ragel/submatch_27__cat8_1.c"

		goto _st34;
		_ctr76:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 1976 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 1981 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 1986 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 1991 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 1996 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2001 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2006 "gen/ragel/submatch_27__cat8_1.c"

		goto _st34;
		_st34:
		p+= 1;
		st_case_34:
		if ( p == pe )
			goto _out34;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr65;
			}
			case 98: {
				goto _st35;
			}
		}
		goto _st0;
		_st35:
		p+= 1;
		st_case_35:
		if ( p == pe )
			goto _out35;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr67;
			}
			case 98: {
				goto _st35;
			}
		}
		goto _st0;
		_ctr67:
			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 2041 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 2046 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 2051 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2056 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2061 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2066 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 2071 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2076 "gen/ragel/submatch_27__cat8_1.c"

		goto _st36;
		_ctr80:
			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 2083 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 2088 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2093 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2098 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2103 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 2108 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2113 "gen/ragel/submatch_27__cat8_1.c"

		goto _st36;
		_st36:
		p+= 1;
		st_case_36:
		if ( p == pe )
			goto _out36;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr69;
			}
			case 98: {
				goto _st37;
			}
		}
		goto _st0;
		_st37:
		p+= 1;
		st_case_37:
		if ( p == pe )
			goto _out37;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr71;
			}
			case 98: {
				goto _st37;
			}
		}
		goto _st0;
		_ctr71:
			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 2148 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2153 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2158 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2163 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 2168 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2173 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 2178 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 2183 "gen/ragel/submatch_27__cat8_1.c"

		goto _st38;
		_ctr84:
			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2190 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2195 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2200 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 2205 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2210 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 2215 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 2220 "gen/ragel/submatch_27__cat8_1.c"

		goto _st38;
		_st38:
		p+= 1;
		st_case_38:
		if ( p == pe )
			goto _out38;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr35;
			}
			case 98: {
				goto _st39;
			}
		}
		goto _st0;
		_st39:
		p+= 1;
		st_case_39:
		if ( p == pe )
			goto _out39;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr37;
			}
			case 98: {
				goto _st39;
			}
		}
		goto _st0;
		_st40:
		p+= 1;
		st_case_40:
		if ( p == pe )
			goto _out40;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr74;
			}
			case 98: {
				goto _st40;
			}
		}
		goto _st0;
		_ctr74:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 2269 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 2274 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 2279 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 2284 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 2289 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2294 "gen/ragel/submatch_27__cat8_1.c"

		goto _st41;
		_ctr91:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 2301 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 2306 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 2311 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 2316 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2321 "gen/ragel/submatch_27__cat8_1.c"

		goto _st41;
		_st41:
		p+= 1;
		st_case_41:
		if ( p == pe )
			goto _out41;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr76;
			}
			case 98: {
				goto _st42;
			}
		}
		goto _st0;
		_st42:
		p+= 1;
		st_case_42:
		if ( p == pe )
			goto _out42;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr78;
			}
			case 98: {
				goto _st42;
			}
		}
		goto _st0;
		_ctr78:
			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 2356 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 2361 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 2366 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2371 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2376 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2381 "gen/ragel/submatch_27__cat8_1.c"

		goto _st43;
		_ctr95:
			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 2388 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 2393 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2398 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2403 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2408 "gen/ragel/submatch_27__cat8_1.c"

		goto _st43;
		_st43:
		p+= 1;
		st_case_43:
		if ( p == pe )
			goto _out43;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr80;
			}
			case 98: {
				goto _st44;
			}
		}
		goto _st0;
		_st44:
		p+= 1;
		st_case_44:
		if ( p == pe )
			goto _out44;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr82;
			}
			case 98: {
				goto _st44;
			}
		}
		goto _st0;
		_ctr82:
			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 2443 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2448 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2453 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2458 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 2463 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2468 "gen/ragel/submatch_27__cat8_1.c"

		goto _st45;
		_ctr99:
			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2475 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2480 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2485 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 2490 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2495 "gen/ragel/submatch_27__cat8_1.c"

		goto _st45;
		_st45:
		p+= 1;
		st_case_45:
		if ( p == pe )
			goto _out45;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr84;
			}
			case 98: {
				goto _st46;
			}
		}
		goto _st0;
		_st46:
		p+= 1;
		st_case_46:
		if ( p == pe )
			goto _out46;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr86;
			}
			case 98: {
				goto _st46;
			}
		}
		goto _st0;
		_ctr86:
			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2530 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2535 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 2540 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2545 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 2550 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 2555 "gen/ragel/submatch_27__cat8_1.c"

		goto _st47;
		_ctr103:
			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2562 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 2567 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2572 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 2577 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 2582 "gen/ragel/submatch_27__cat8_1.c"

		goto _st47;
		_st47:
		p+= 1;
		st_case_47:
		if ( p == pe )
			goto _out47;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr39;
			}
			case 98: {
				goto _st48;
			}
		}
		goto _st0;
		_st48:
		p+= 1;
		st_case_48:
		if ( p == pe )
			goto _out48;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr41;
			}
			case 98: {
				goto _st48;
			}
		}
		goto _st0;
		_st49:
		p+= 1;
		st_case_49:
		if ( p == pe )
			goto _out49;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr89;
			}
			case 98: {
				goto _st49;
			}
		}
		goto _st0;
		_ctr89:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 2631 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 2636 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 2641 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 2646 "gen/ragel/submatch_27__cat8_1.c"

		goto _st50;
		_ctr110:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 2653 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 2658 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 2663 "gen/ragel/submatch_27__cat8_1.c"

		goto _st50;
		_st50:
		p+= 1;
		st_case_50:
		if ( p == pe )
			goto _out50;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr91;
			}
			case 98: {
				goto _st51;
			}
		}
		goto _st0;
		_st51:
		p+= 1;
		st_case_51:
		if ( p == pe )
			goto _out51;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr93;
			}
			case 98: {
				goto _st51;
			}
		}
		goto _st0;
		_ctr93:
			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 2698 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 2703 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 2708 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2713 "gen/ragel/submatch_27__cat8_1.c"

		goto _st52;
		_ctr114:
			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 2720 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 2725 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2730 "gen/ragel/submatch_27__cat8_1.c"

		goto _st52;
		_st52:
		p+= 1;
		st_case_52:
		if ( p == pe )
			goto _out52;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr95;
			}
			case 98: {
				goto _st53;
			}
		}
		goto _st0;
		_st53:
		p+= 1;
		st_case_53:
		if ( p == pe )
			goto _out53;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr97;
			}
			case 98: {
				goto _st53;
			}
		}
		goto _st0;
		_ctr97:
			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 2765 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2770 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2775 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2780 "gen/ragel/submatch_27__cat8_1.c"

		goto _st54;
		_ctr118:
			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 2787 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2792 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2797 "gen/ragel/submatch_27__cat8_1.c"

		goto _st54;
		_st54:
		p+= 1;
		st_case_54:
		if ( p == pe )
			goto _out54;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr99;
			}
			case 98: {
				goto _st55;
			}
		}
		goto _st0;
		_st55:
		p+= 1;
		st_case_55:
		if ( p == pe )
			goto _out55;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr101;
			}
			case 98: {
				goto _st55;
			}
		}
		goto _st0;
		_ctr101:
			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 2832 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2837 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 2842 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2847 "gen/ragel/submatch_27__cat8_1.c"

		goto _st56;
		_ctr122:
			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 2854 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 2859 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2864 "gen/ragel/submatch_27__cat8_1.c"

		goto _st56;
		_st56:
		p+= 1;
		st_case_56:
		if ( p == pe )
			goto _out56;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr103;
			}
			case 98: {
				goto _st57;
			}
		}
		goto _st0;
		_st57:
		p+= 1;
		st_case_57:
		if ( p == pe )
			goto _out57;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr105;
			}
			case 98: {
				goto _st57;
			}
		}
		goto _st0;
		_ctr105:
			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 2899 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2904 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 2909 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 2914 "gen/ragel/submatch_27__cat8_1.c"

		goto _st58;
		_ctr126:
			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 2921 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 2926 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 2931 "gen/ragel/submatch_27__cat8_1.c"

		goto _st58;
		_st58:
		p+= 1;
		st_case_58:
		if ( p == pe )
			goto _out58;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr43;
			}
			case 98: {
				goto _st59;
			}
		}
		goto _st0;
		_st59:
		p+= 1;
		st_case_59:
		if ( p == pe )
			goto _out59;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr45;
			}
			case 98: {
				goto _st59;
			}
		}
		goto _st0;
		_st60:
		p+= 1;
		st_case_60:
		if ( p == pe )
			goto _out60;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr108;
			}
			case 98: {
				goto _st60;
			}
		}
		goto _st0;
		_ctr108:
			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a1 = p; }
		
#line 2980 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 10 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b1 = p; }
		
#line 2985 "gen/ragel/submatch_27__cat8_1.c"

		goto _st61;
		_st61:
		p+= 1;
		st_case_61:
		if ( p == pe )
			goto _out61;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr110;
			}
			case 98: {
				goto _st62;
			}
		}
		goto _st0;
		_st62:
		p+= 1;
		st_case_62:
		if ( p == pe )
			goto _out62;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr112;
			}
			case 98: {
				goto _st62;
			}
		}
		goto _st0;
		_ctr112:
			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a2 = p; }
		
#line 3020 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 11 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b2 = p; }
		
#line 3025 "gen/ragel/submatch_27__cat8_1.c"

		goto _st63;
		_st63:
		p+= 1;
		st_case_63:
		if ( p == pe )
			goto _out63;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr114;
			}
			case 98: {
				goto _st64;
			}
		}
		goto _st0;
		_st64:
		p+= 1;
		st_case_64:
		if ( p == pe )
			goto _out64;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr116;
			}
			case 98: {
				goto _st64;
			}
		}
		goto _st0;
		_ctr116:
			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a3 = p; }
		
#line 3060 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 12 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b3 = p; }
		
#line 3065 "gen/ragel/submatch_27__cat8_1.c"

		goto _st65;
		_st65:
		p+= 1;
		st_case_65:
		if ( p == pe )
			goto _out65;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr118;
			}
			case 98: {
				goto _st66;
			}
		}
		goto _st0;
		_st66:
		p+= 1;
		st_case_66:
		if ( p == pe )
			goto _out66;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr120;
			}
			case 98: {
				goto _st66;
			}
		}
		goto _st0;
		_ctr120:
			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a4 = p; }
		
#line 3100 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 13 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b4 = p; }
		
#line 3105 "gen/ragel/submatch_27__cat8_1.c"

		goto _st67;
		_st67:
		p+= 1;
		st_case_67:
		if ( p == pe )
			goto _out67;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr122;
			}
			case 98: {
				goto _st68;
			}
		}
		goto _st0;
		_st68:
		p+= 1;
		st_case_68:
		if ( p == pe )
			goto _out68;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr124;
			}
			case 98: {
				goto _st68;
			}
		}
		goto _st0;
		_ctr124:
			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a5 = p; }
		
#line 3140 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 14 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b5 = p; }
		
#line 3145 "gen/ragel/submatch_27__cat8_1.c"

		goto _st69;
		_st69:
		p+= 1;
		st_case_69:
		if ( p == pe )
			goto _out69;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr126;
			}
			case 98: {
				goto _st70;
			}
		}
		goto _st0;
		_st70:
		p+= 1;
		st_case_70:
		if ( p == pe )
			goto _out70;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr128;
			}
			case 98: {
				goto _st70;
			}
		}
		goto _st0;
		_ctr128:
			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			a6 = p; }
		
#line 3180 "gen/ragel/submatch_27__cat8_1.c"

			{
#line 15 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"
			b6 = p; }
		
#line 3185 "gen/ragel/submatch_27__cat8_1.c"

		goto _st71;
		_st71:
		p+= 1;
		st_case_71:
		if ( p == pe )
			goto _out71;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr47;
			}
			case 98: {
				goto _st72;
			}
		}
		goto _st0;
		_st72:
		p+= 1;
		st_case_72:
		if ( p == pe )
			goto _out72;
		switch( ( (*( p))) ) {
			case 97: {
				goto _ctr49;
			}
			case 98: {
				goto _st72;
			}
		}
		goto _st0;
		_out73: cs = 73; goto _out; 
		_out0: cs = 0; goto _out; 
		_out1: cs = 1; goto _out; 
		_out2: cs = 2; goto _out; 
		_out3: cs = 3; goto _out; 
		_out4: cs = 4; goto _out; 
		_out5: cs = 5; goto _out; 
		_out6: cs = 6; goto _out; 
		_out7: cs = 7; goto _out; 
		_out8: cs = 8; goto _out; 
		_out9: cs = 9; goto _out; 
		_out10: cs = 10; goto _out; 
		_out11: cs = 11; goto _out; 
		_out12: cs = 12; goto _out; 
		_out13: cs = 13; goto _out; 
		_out14: cs = 14; goto _out; 
		_out15: cs = 15; goto _out; 
		_out16: cs = 16; goto _out; 
		_out17: cs = 17; goto _out; 
		_out18: cs = 18; goto _out; 
		_out19: cs = 19; goto _out; 
		_out20: cs = 20; goto _out; 
		_out21: cs = 21; goto _out; 
		_out22: cs = 22; goto _out; 
		_out23: cs = 23; goto _out; 
		_out24: cs = 24; goto _out; 
		_out25: cs = 25; goto _out; 
		_out26: cs = 26; goto _out; 
		_out27: cs = 27; goto _out; 
		_out28: cs = 28; goto _out; 
		_out29: cs = 29; goto _out; 
		_out30: cs = 30; goto _out; 
		_out31: cs = 31; goto _out; 
		_out32: cs = 32; goto _out; 
		_out33: cs = 33; goto _out; 
		_out34: cs = 34; goto _out; 
		_out35: cs = 35; goto _out; 
		_out36: cs = 36; goto _out; 
		_out37: cs = 37; goto _out; 
		_out38: cs = 38; goto _out; 
		_out39: cs = 39; goto _out; 
		_out40: cs = 40; goto _out; 
		_out41: cs = 41; goto _out; 
		_out42: cs = 42; goto _out; 
		_out43: cs = 43; goto _out; 
		_out44: cs = 44; goto _out; 
		_out45: cs = 45; goto _out; 
		_out46: cs = 46; goto _out; 
		_out47: cs = 47; goto _out; 
		_out48: cs = 48; goto _out; 
		_out49: cs = 49; goto _out; 
		_out50: cs = 50; goto _out; 
		_out51: cs = 51; goto _out; 
		_out52: cs = 52; goto _out; 
		_out53: cs = 53; goto _out; 
		_out54: cs = 54; goto _out; 
		_out55: cs = 55; goto _out; 
		_out56: cs = 56; goto _out; 
		_out57: cs = 57; goto _out; 
		_out58: cs = 58; goto _out; 
		_out59: cs = 59; goto _out; 
		_out60: cs = 60; goto _out; 
		_out61: cs = 61; goto _out; 
		_out62: cs = 62; goto _out; 
		_out63: cs = 63; goto _out; 
		_out64: cs = 64; goto _out; 
		_out65: cs = 65; goto _out; 
		_out66: cs = 66; goto _out; 
		_out67: cs = 67; goto _out; 
		_out68: cs = 68; goto _out; 
		_out69: cs = 69; goto _out; 
		_out70: cs = 70; goto _out; 
		_out71: cs = 71; goto _out; 
		_out72: cs = 72; goto _out; 
		_out: {}
	}
	
#line 43 "../../../benchmarks/c/src/ragel/submatch_27__cat8_1.rl"

	
	in->p = p;
	in->pe = pe;
}
