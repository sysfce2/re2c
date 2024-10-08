/* Generated by re2d */
// re2d $INPUT -o $OUTPUT -i
module main;

enum ERROR = ulong.max;

private void add(ulong BASE)(ref ulong u, int d) {
    u = u * BASE + d;
    if (u > uint.max) { u = ERROR; }
}

private ulong parse_u32(const(char)* s) {
    const(char)* yycursor = s, yymarker;
    ulong u = 0;

    
{
    char yych;
    yych = *yycursor;
    switch (yych) {
        case '0': goto yy2;
        case '1': .. case '9': goto yy4;
        default: goto yy1;
    }
yy1:
    ++yycursor;
    { return ERROR; }
yy2:
    yych = *(yymarker = ++yycursor);
    switch (yych) {
        case 'B':
        case 'b': goto yy5;
        case 'X':
        case 'x': goto yy7;
        default: goto yy3;
    }
yy3:
    { goto oct; }
yy4:
    ++yycursor;
    yycursor -= 1;
    { goto dec; }
yy5:
    yych = *++yycursor;
    switch (yych) {
        case '0': .. case '1': goto yy8;
        default: goto yy6;
    }
yy6:
    yycursor = yymarker;
    goto yy3;
yy7:
    yych = *++yycursor;
    switch (yych) {
        case '0': .. case '9':
        case 'A': .. case 'F':
        case 'a': .. case 'f': goto yy9;
        default: goto yy6;
    }
yy8:
    ++yycursor;
    yycursor -= 1;
    { goto bin; }
yy9:
    ++yycursor;
    yycursor -= 1;
    { goto hex; }
}

bin:
    
{
    char yych;
    yych = *yycursor;
    switch (yych) {
        case 0x00: goto yy11;
        case '0': .. case '1': goto yy13;
        default: goto yy12;
    }
yy11:
    ++yycursor;
    { return u; }
yy12:
    ++yycursor;
    { return ERROR; }
yy13:
    ++yycursor;
    { add!(2)(u, yycursor[-1] - '0'); goto bin; }
}

oct:
    
{
    char yych;
    yych = *yycursor;
    switch (yych) {
        case 0x00: goto yy15;
        case '0': .. case '7': goto yy17;
        default: goto yy16;
    }
yy15:
    ++yycursor;
    { return u; }
yy16:
    ++yycursor;
    { return ERROR; }
yy17:
    ++yycursor;
    { add!(8)(u, yycursor[-1] - '0'); goto oct; }
}

dec:
    
{
    char yych;
    yych = *yycursor;
    switch (yych) {
        case 0x00: goto yy19;
        case '0': .. case '9': goto yy21;
        default: goto yy20;
    }
yy19:
    ++yycursor;
    { return u; }
yy20:
    ++yycursor;
    { return ERROR; }
yy21:
    ++yycursor;
    { add!(10)(u, yycursor[-1] - '0'); goto dec; }
}

hex:
    
{
    char yych;
    yych = *yycursor;
    switch (yych) {
        case 0x00: goto yy23;
        case '0': .. case '9': goto yy25;
        case 'A': .. case 'F': goto yy26;
        case 'a': .. case 'f': goto yy27;
        default: goto yy24;
    }
yy23:
    ++yycursor;
    { return u; }
yy24:
    ++yycursor;
    { return ERROR; }
yy25:
    ++yycursor;
    { add!(16)(u, yycursor[-1] - '0');      goto hex; }
yy26:
    ++yycursor;
    { add!(16)(u, yycursor[-1] - 'A' + 10); goto hex; }
yy27:
    ++yycursor;
    { add!(16)(u, yycursor[-1] - 'a' + 10); goto hex; }
}

}

void main() {
    assert(parse_u32("") == ERROR);
    assert(parse_u32("1234567890") == 1234567890);
    assert(parse_u32("0b1101") == 13);
    assert(parse_u32("0x7Fe") == 2046);
    assert(parse_u32("0644") == 420);
    assert(parse_u32("9999999999") == ERROR);
}
