# Generated by re2py
# re2py $INPUT -o $OUTPUT

from collections import namedtuple

SemVer = namedtuple('SemVer', 'major minor patch')

# Maximum number of capturing groups among all rules.
YYMAXNMATCH = 4

NONE = -1

def parse(yyinput):
    yycursor = 0

    # A list for capturing parentheses (twice the number of groups).
    yypmatch = [None] * (YYMAXNMATCH * 2)


    yystate = 0
    while True:
        match yystate:
            case 0:
                yych = yyinput[yycursor]
                if yych <= 0x2F:
                    yycursor += 1
                    yystate = 1
                    continue
                if yych <= 0x39:
                    yyt1 = yycursor
                    yycursor += 1
                    yystate = 3
                    continue
                yycursor += 1
                yystate = 1
                continue
            case 1:
                yystate = 2
                continue
            case 2:
                return None
            case 3:
                yymarker = yycursor
                yych = yyinput[yycursor]
                if yych == 0x2E:
                    yycursor += 1
                    yystate = 4
                    continue
                if yych <= 0x2F:
                    yystate = 2
                    continue
                if yych <= 0x39:
                    yycursor += 1
                    yystate = 6
                    continue
                yystate = 2
                continue
            case 4:
                yych = yyinput[yycursor]
                if yych <= 0x2F:
                    yystate = 5
                    continue
                if yych <= 0x39:
                    yyt2 = yycursor
                    yycursor += 1
                    yystate = 7
                    continue
                yystate = 5
                continue
            case 5:
                yycursor = yymarker
                yystate = 2
                continue
            case 6:
                yych = yyinput[yycursor]
                if yych == 0x2E:
                    yycursor += 1
                    yystate = 4
                    continue
                if yych <= 0x2F:
                    yystate = 5
                    continue
                if yych <= 0x39:
                    yycursor += 1
                    yystate = 6
                    continue
                yystate = 5
                continue
            case 7:
                yych = yyinput[yycursor]
                if yych <= 0x2E:
                    if yych <= 0x00:
                        yyt3 = yycursor
                        yyt4 = -1
                        yyt5 = -1
                        yycursor += 1
                        yystate = 8
                        continue
                    if yych <= 0x2D:
                        yystate = 5
                        continue
                    yyt3 = yycursor
                    yyt5 = yycursor
                    yycursor += 1
                    yystate = 9
                    continue
                else:
                    if yych <= 0x2F:
                        yystate = 5
                        continue
                    if yych <= 0x39:
                        yycursor += 1
                        yystate = 7
                        continue
                    yystate = 5
                    continue
            case 8:
                yynmatch = 4
                yypmatch[2] = yyt1
                yypmatch[4] = yyt2
                yypmatch[5] = yyt3
                yypmatch[6] = yyt5
                yypmatch[7] = yyt4
                yypmatch[0] = yyt1
                yypmatch[1] = yycursor
                yypmatch[3] = yyt2
                yypmatch[3] -= 1
                # `yynmatch` is the number of capturing groups
                assert yynmatch == 4
                # Even `yypmatch` values are for opening parentheses, odd values
                # are for closing parentheses, the first group is the whole match.
                major = int(yyinput[yypmatch[2]:yypmatch[3]])
                minor = int(yyinput[yypmatch[4]:yypmatch[5]])
                patch = 0 if yypmatch[6] == NONE else int(yyinput[yypmatch[6] + 1:yypmatch[7]])
                return SemVer(major, minor, patch)
            case 9:
                yych = yyinput[yycursor]
                if yych <= 0x00:
                    yystate = 5
                    continue
                yystate = 11
                continue
            case 10:
                yych = yyinput[yycursor]
                yystate = 11
                continue
            case 11:
                if yych <= 0x00:
                    yyt4 = yycursor
                    yycursor += 1
                    yystate = 8
                    continue
                if yych <= 0x2F:
                    yystate = 5
                    continue
                if yych <= 0x39:
                    yycursor += 1
                    yystate = 10
                    continue
                yystate = 5
                continue
            case _:
                raise "internal lexer error"


assert parse(b"23.34\0") == SemVer(23, 34, 0)
assert parse(b"1.2.99999\0") == SemVer(1, 2, 99999)
assert parse(b"1.a\0") == None
