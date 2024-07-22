# Generated by re2py
# re2py $INPUT -o $OUTPUT

class State:
    def __init__(self, str):
        self.yyinput = str
        self.yycursor = 0
        self.yymarker = 0

# Common re2c definitions shared between all functions.


def parse_u32(str):
    st = State(str)

    yystate = 0
    while True:
        match yystate:
            case 0:
                yych = st.yyinput[st.yycursor]
                st.yycursor += 1
                if yych <= 0x2F:
                    yystate = 1
                    continue
                if yych <= 0x30:
                    yystate = 2
                    continue
                if yych <= 0x39:
                    yystate = 4
                    continue
                yystate = 1
                continue
            case 1:
                return None
            case 2:
                st.yymarker = st.yycursor
                yych = st.yyinput[st.yycursor]
                if yych <= 0x58:
                    if yych == 0x42:
                        st.yycursor += 1
                        yystate = 5
                        continue
                    if yych >= 0x58:
                        st.yycursor += 1
                        yystate = 7
                        continue
                    yystate = 3
                    continue
                else:
                    if yych <= 0x62:
                        if yych >= 0x62:
                            st.yycursor += 1
                            yystate = 5
                            continue
                        yystate = 3
                        continue
                    else:
                        if yych == 0x78:
                            st.yycursor += 1
                            yystate = 7
                            continue
                        yystate = 3
                        continue
            case 3:
                return parse_oct(st)
            case 4:
                st.yycursor -= 1
                return parse_dec(st)
            case 5:
                yych = st.yyinput[st.yycursor]
                if yych <= 0x2F:
                    yystate = 6
                    continue
                if yych <= 0x31:
                    st.yycursor += 1
                    yystate = 8
                    continue
                yystate = 6
                continue
            case 6:
                st.yycursor = st.yymarker
                yystate = 3
                continue
            case 7:
                yych = st.yyinput[st.yycursor]
                if yych <= 0x40:
                    if yych <= 0x2F:
                        yystate = 6
                        continue
                    if yych <= 0x39:
                        st.yycursor += 1
                        yystate = 9
                        continue
                    yystate = 6
                    continue
                else:
                    if yych <= 0x46:
                        st.yycursor += 1
                        yystate = 9
                        continue
                    if yych <= 0x60:
                        yystate = 6
                        continue
                    if yych <= 0x66:
                        st.yycursor += 1
                        yystate = 9
                        continue
                    yystate = 6
                    continue
            case 8:
                st.yycursor -= 1
                return parse_bin(st)
            case 9:
                st.yycursor -= 1
                return parse_hex(st)
            case _:
                raise "internal lexer error"


def parse_bin(st):
    n = 0
    while True: 
        yystate = 0
        while True:
            match yystate:
                case 0:
                    yych = st.yyinput[st.yycursor]
                    st.yycursor += 1
                    if yych <= 0x2F:
                        yystate = 1
                        continue
                    if yych <= 0x31:
                        yystate = 2
                        continue
                    yystate = 1
                    continue
                case 1:
                    return n
                case 2:
                    n = n * 2 + (st.yyinput[st.yycursor - 1] - 48)
                    break
                case _:
                    raise "internal lexer error"


def parse_oct(st):
    n = 0
    while True: 
        yystate = 0
        while True:
            match yystate:
                case 0:
                    yych = st.yyinput[st.yycursor]
                    st.yycursor += 1
                    if yych <= 0x2F:
                        yystate = 1
                        continue
                    if yych <= 0x37:
                        yystate = 2
                        continue
                    yystate = 1
                    continue
                case 1:
                    return n
                case 2:
                    n = n * 8 + (st.yyinput[st.yycursor - 1] - 48)
                    break
                case _:
                    raise "internal lexer error"


def parse_dec(st):
    n = 0
    while True: 
        yystate = 0
        while True:
            match yystate:
                case 0:
                    yych = st.yyinput[st.yycursor]
                    st.yycursor += 1
                    if yych <= 0x2F:
                        yystate = 1
                        continue
                    if yych <= 0x39:
                        yystate = 2
                        continue
                    yystate = 1
                    continue
                case 1:
                    return n
                case 2:
                    n = n * 10 + (st.yyinput[st.yycursor - 1] - 48)
                    break
                case _:
                    raise "internal lexer error"


def parse_hex(st):
    n = 0
    while True: 
        yystate = 0
        while True:
            match yystate:
                case 0:
                    yych = st.yyinput[st.yycursor]
                    st.yycursor += 1
                    if yych <= 0x40:
                        if yych <= 0x2F:
                            yystate = 1
                            continue
                        if yych <= 0x39:
                            yystate = 2
                            continue
                        yystate = 1
                        continue
                    else:
                        if yych <= 0x46:
                            yystate = 3
                            continue
                        if yych <= 0x60:
                            yystate = 1
                            continue
                        if yych <= 0x66:
                            yystate = 4
                            continue
                        yystate = 1
                        continue
                case 1:
                    return n
                case 2:
                    n = n * 16 + (st.yyinput[st.yycursor - 1] - 48)
                    break
                case 3:
                    n = n * 16 + (st.yyinput[st.yycursor - 1] - 55)
                    break
                case 4:
                    n = n * 16 + (st.yyinput[st.yycursor - 1] - 87)
                    break
                case _:
                    raise "internal lexer error"


assert parse_u32(b"\0") == None
assert parse_u32(b"1234567890\0") == 1234567890
assert parse_u32(b"0b1101\0") == 13
assert parse_u32(b"0x7Fe\0") == 2046
assert parse_u32(b"0644\0") == 420
assert parse_u32(b"9999999999\0") == 9999999999
