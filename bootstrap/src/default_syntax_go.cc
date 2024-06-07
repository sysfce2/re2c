#include "src/parse/conf_parser.h"
const char* DEFAULT_SYNTAX_GO =
    "supported_apis = [\"generic\"];\n"
    "supported_api_styles = [\"free-form\", \"functions\"];\n"
    "supported_code_models = [\"goto_label\", \"loop_switch\", \"recursive_functions\"];\n"
    "supported_targets = [\"code\", \"dot\"];\n"
    "supported_features = [\"nested_ifs\", \"bitmaps\"];\n"
    "\n"
    "semicolons = 0;\n"
    "implicit_bool_conversion = 0;\n"
    "backtick_quoted_strings = 1;\n"
    "standalone_single_quotes = 0;\n"
    "indentation_sensitive = 0;\n"
    "wrap_blocks_in_braces = 1;\n"
    "\n"
    "conf:api = custom;\n"
    "conf:api:style = free-form;\n"
    "conf:api:sigil = \"@@\";\n"
    "conf:define:YYGETCOND:naked = 0;\n"
    "conf:define:YYSETCOND:naked = 0;\n"
    "conf:define:YYSETCOND@cond = \"@@\";\n"
    "conf:define:YYGETSTATE:naked = 0;\n"
    "conf:define:YYSETSTATE:naked = 0;\n"
    "conf:define:YYSETSTATE@state = \"@@\";\n"
    "conf:define:YYFILL@len = \"@@\";\n"
    "conf:define:YYFILL:naked = 0;\n"
    "conf:define:YYFN = [\"<undefined-function-name>;<undefined-function-type>\"];\n"
    "conf:yyfn:sep = \";\";\n"
    "conf:variable:yyctable = \"yyctable\";\n"
    "conf:variable:yyaccept = \"yyaccept\";\n"
    "conf:variable:yytarget = \"yytarget\";\n"
    "conf:variable:yystate = \"yystate\";\n"
    "conf:variable:yynmatch = \"yynmatch\";\n"
    "conf:variable:yypmatch = \"yypmatch\";\n"
    "conf:variable:yych = \"yych\";\n"
    "conf:variable:yych:conversion = 0;\n"
    "conf:variable:yych:literals = char_or_hex;\n"
    "conf:variable:yych:emit = (code_model.recursive_functions ? 0 : 1);\n"
    "conf:variable:yybm = \"yybm\";\n"
    "conf:variable:yybm:hex = 0;\n"
    "conf:variable:yyfill = \"\";\n"
    "conf:variable:yystable = \"\"; // deprecated\n"
    "conf:header = \"\";\n"
    "conf:eof = -1;\n"
    "conf:sentinel = -1;\n"
    "conf:yyfill:enable = 1;\n"
    "conf:yyfill:parameter = 1;\n"
    "conf:yyfill:check = 1;\n"
    "conf:tags = 0;\n"
    "conf:leftmost-captures = 0;\n"
    "conf:posix-captures = 0;\n"
    "conf:tags:prefix = \"yyt\";\n"
    "conf:invert-captures = 0;\n"
    "conf:cond:abort = 1;\n"
    "conf:cond:prefix = \"yyc_\";\n"
    "conf:cond:enumprefix = \"yyc\";\n"
    "conf:cond:divider@cond = \"@@\";\n"
    "conf:cond:goto@cond = \"@@\";\n"
    "conf:state:abort = (code_model.goto_label ? 0 : 1); // historically disabled for goto/label\n"
    "conf:state:nextlabel = 0;\n"
    "conf:bit-vectors = 0;\n"
    "conf:debug-output = 0;\n"
    "conf:computed-gotos = 0;\n"
    "conf:computed-gotos:threshold = 9;\n"
    "conf:nested-ifs = 0;\n"
    "conf:case-insensitive = 0;\n"
    "conf:case-inverted = 0;\n"
    "conf:case-ranges = 0;\n"
    "conf:unsafe = 0;\n"
    "conf:monadic = 0;\n"
    "conf:encoding:ebcdic = 0;\n"
    "conf:encoding:utf32 = 0;\n"
    "conf:encoding:ucs2 = 0;\n"
    "conf:encoding:utf16 = 0;\n"
    "conf:encoding:utf8 = 0;\n"
    "conf:encoding-policy = ignore;\n"
    "conf:empty-class = match-empty;\n"
    "conf:indent:string = \"\\t\";\n"
    "conf:indent:top = 0;\n"
    "conf:label:prefix = \"yy\";\n"
    "conf:label:yyfill = \"yyFillLabel\";\n"
    "conf:label:yyloop = \"yyl\"; // In Go `continue` statements have labels, use it to avoid ambiguity.\n"
    "conf:label:yyNext = \"yyNext\";\n"
    "conf:label:start = 0;\n"
    "\n"
    "conf:define:YYBACKUP = \"YYBACKUP\";\n"
    "conf:define:YYBACKUPCTX = \"YYBACKUPCTX\";\n"
    "conf:define:YYCONDTYPE = \"YYCONDTYPE\";\n"
    "conf:define:YYCOPYMTAG = sigil \"{lhs} = \" sigil \"{rhs}\";\n"
    "conf:define:YYCOPYSTAG = sigil \"{lhs} = \" sigil \"{rhs}\";\n"
    "conf:define:YYCTYPE = \"YYCTYPE\";\n"
    "conf:define:YYCTXMARKER = \"YYCTXMARKER\";\n"
    "conf:define:YYCURSOR = \"YYCURSOR\";\n"
    "conf:define:YYDEBUG = \"YYDEBUG\";\n"
    "conf:define:YYFILL = \"YYFILL\";\n"
    "conf:define:YYGETACCEPT = sigil \"{var}\";\n"
    "conf:define:YYGETCOND = \"YYGETCONDITION\"; // historic default\n"
    "conf:define:YYGETSTATE = \"YYGETSTATE\";\n"
    "conf:define:YYLESSTHAN = \"YYLESSTHAN\";\n"
    "conf:define:YYLIMIT = \"YYLIMIT\";\n"
    "conf:define:YYMARKER = \"YYMARKER\";\n"
    "conf:define:YYMAXFILL = \"YYMAXFILL\";\n"
    "conf:define:YYMAXNMATCH = \"YYMAXNMATCH\";\n"
    "conf:define:YYMTAGN = \"YYMTAGN\";\n"
    "conf:define:YYMTAGP = \"YYMTAGP\";\n"
    "conf:define:YYPEEK = \"YYPEEK\";\n"
    "conf:define:YYRESTORE = \"YYRESTORE\";\n"
    "conf:define:YYRESTORECTX = \"YYRESTORECTX\";\n"
    "conf:define:YYRESTORETAG = \"YYRESTORETAG\";\n"
    "conf:define:YYSETACCEPT = sigil \"{var} = \" sigil \"{val}\";\n"
    "conf:define:YYSETCOND = \"YYSETCONDITION\"; // historic default\n"
    "conf:define:YYSETSTATE = \"YYSETSTATE\";\n"
    "conf:define:YYSHIFT = \"YYSHIFT\";\n"
    "conf:define:YYSHIFTSTAG = \"YYSHIFTSTAG\";\n"
    "conf:define:YYSHIFTMTAG = \"YYSHIFTMTAG\";\n"
    "conf:define:YYSKIP = \"YYSKIP\";\n"
    "conf:define:YYSTAGN = \"YYSTAGN\";\n"
    "conf:define:YYSTAGP = \"YYSTAGP\";\n"
    "conf:tags:expression = sigil;\n"
    "conf:cond:divider = \"/* *********************************** */\";\n"
    "conf:cond:goto = \"goto \" sigil;\n"
    "\n"
    "code:var_local = topindent (have_init? name \" := \" init : \"var \" name \" \" type) nl;\n"
    "code:var_global = topindent \"var \" name \" \" type (have_init? \" = \" init) nl;\n"
    "\n"
    "code:const_local = topindent \"const \" name \" = \" init nl;\n"
    "code:const_global = code:const_local;\n"
    "\n"
    "code:array_local =\n"
    "    topindent name \" := [\" size \"]\" type \"{\" nl indent\n"
    "        [row: topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem \",\"] nl]\n"
    "    dedent topindent \"}\" nl;\n"
    "code:array_global =\n"
    "    topindent \"var \" name \" = {\" nl indent\n"
    "        [row: topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem \",\"] nl]\n"
    "    dedent topindent \"}\" nl;\n"
    "code:array_elem = array \"[\" index \"]\";\n"
    "\n"
    "code:type_int = \"int\";\n"
    "code:type_uint = \"uint\";\n"
    "// code:type_cond_enum\n"
    "code:type_yybm = \"byte\";\n"
    "// code:type_yytarget\n"
    "\n"
    "code:assign = topindent lhs \" = \" rhs nl;\n"
    "\n"
    "code:if_then_else =\n"
    "    [branch{0}: topindent \"if (\" cond \") {\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    [branch{1:-1}: topindent \"} else \" (have_cond? \"if (\" cond \") \") \"{\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:switch =\n"
    "    topindent \"switch (\" expr \") {\" nl\n"
    "    [case: case]\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:switch_cases =\n"
    "    [case{0:-2}: topindent case nl\n"
    "        indent topindent \"fallthrough\" dedent nl]\n"
    "    [case{-1}: topindent case nl]\n"
    "        indent [stmt: stmt] dedent;\n"
    "\n"
    "code:switch_case_range = \"case \" [val{0}: val] [val{1:-1}: \",\" val] \":\";\n"
    "\n"
    "code:switch_case_default = \"default:\";\n"
    "\n"
    "code:loop =\n"
    "    (loop_label? label \":\" nl)\n"
    "    topindent \"for {\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:goto = topindent \"goto \" label nl;\n"
    "\n"
    "code:enum =\n"
    "    \"const (\" nl indent\n"
    "        [elem{0}:    topindent elem \" = \" (have_init ? init : \"iota\") nl]\n"
    "        [elem{1:-1}: topindent elem (have_init ? \" = \" init) nl]\n"
    "    dedent \")\" nl;\n"
    "\n"
    "code:enum_elem = name;\n"
    "\n"
    "code:fndef =\n"
    "    topindent \"func \" name \"(\"\n"
    "        [arg{0:-2}: argname \" \" argtype \", \"]\n"
    "        [arg{-1}:   argname \" \" argtype]\n"
    "    \")\" (have_type ? \" \" type) \" {\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    \"}\" nl;\n"
    "\n"
    "code:fncall =\n"
    "    topindent (have_retval ? retval \" = \") name \"(\" [arg{0:-2}: arg \", \"] [arg{-1}: arg] \")\" nl;\n"
    "\n"
    "code:tailcall =\n"
    "    topindent (have_retval ? \"return \") name \"(\" [arg{0:-2}: arg \", \"] [arg{-1}: arg] \")\" nl;\n"
    "\n"
    "code:recursive_functions = [fn: fndef nl];\n"
    "\n"
    "code:fingerprint =\n"
    "    \"// Code generated by re2c\" (version? \" \" version) (date? \" on \" date) \", DO NOT EDIT.\" nl;\n"
    "\n"
    "code:line_info = \"//line \\\"\" file \"\\\":\" line nl;\n"
    "\n"
    "code:abort = topindent \"panic(\\\"internal lexer error\\\")\" nl;\n"
    "\n"
    "code:yydebug = topindent debug (api_style.functions ? \"()\") nl;\n"
    "\n"
    "code:yypeek = topindent char (code_model.recursive_functions ? \" := \" : \" = \")\n"
    "    peek (api_style.functions ? \"()\") nl;\n"
    "\n"
    "code:yyskip = topindent skip (api_style.functions ? \"()\") nl;\n"
    "\n"
    "code:yybackup = topindent backup (api_style.functions ? \"()\") nl;\n"
    "\n"
    "code:yybackupctx = topindent backupctx (api_style.functions ? \"()\") nl;\n"
    "\n"
    "code:yyrestore = topindent restore (api_style.functions ? \"()\") nl;\n"
    "\n"
    "code:yyrestorectx = topindent restorectx (api_style.functions ? \"()\") nl;\n"
    "\n"
    "code:yyrestoretag = topindent restoretag (api_style.functions ? \"(\" tag \")\") nl;\n"
    "\n"
    "code:yyshift = topindent shift (api_style.functions ? \"(-\" offset \")\") nl;\n"
    "\n"
    "code:yyshiftstag =\n"
    "    (nested ? topindent \"if (\" tag \" != \" neg \") {\" nl indent)\n"
    "        topindent shiftstag (api_style.functions ? \"(\" tag \", -\" offset \")\") nl\n"
    "    (nested ? dedent topindent \"}\" nl);\n"
    "\n"
    "code:yyshiftmtag = topindent shiftmtag (api_style.functions ? \"(\" tag \", -\" offset \")\") nl;\n"
    "\n"
    "code:yystagp = topindent stagp (api_style.functions ? \"(\" tag \")\") nl;\n"
    "\n"
    "code:yymtagp = topindent mtagp (api_style.functions ? \"(\" tag \")\") nl;\n"
    "\n"
    "code:yystagn = topindent stagn (api_style.functions ? \"(\" tag \")\") nl;\n"
    "\n"
    "code:yymtagn = topindent mtagn (api_style.functions ? \"(\" tag \")\") nl;\n"
    "\n"
    "// function style is not supported, as there's no sensible default\n"
    "code:yycopystag = topindent copystag nl;\n"
    "\n"
    "// function style is not supported, as there's no sensible default\n"
    "code:yycopymtag = topindent copymtag nl;\n"
    "\n"
    "// function style is not supported, as there's no sensible default\n"
    "code:yygetaccept = getaccept;\n"
    "\n"
    "// function style is not supported, as there's no sensible default\n"
    "code:yysetaccept = topindent setaccept nl;\n"
    "\n"
    "code:yygetcond = getcond (api_style.functions ? \"()\");\n"
    "\n"
    "code:yysetcond = topindent setcond (api_style.functions ? \"(\" cond \")\") nl;\n"
    "\n"
    "code:yygetstate = getstate (api_style.functions ? \"()\");\n"
    "\n"
    "code:yysetstate = topindent setstate (api_style.functions ? \"(\" state \")\") nl;\n"
    "\n"
    "code:yylessthan = lessthan (api_style.functions ? \"(\" need \")\");\n"
    ;
