#include "src/parse/conf_parser.h"
const char* DEFAULT_SYNTAX_OCAML =
    "supported_apis = [\"generic\"];\n"
    "supported_api_styles = [\"free-form\"];\n"
    "supported_code_models = [\"recursive_functions\"];\n"
    "supported_targets = [\"code\", \"dot\"];\n"
    "supported_features = [\"nested_ifs\", \"case_ranges\"];\n"
    "\n"
    "semicolons = 0;\n"
    "implicit_bool_conversion = 0;\n"
    "backtick_quoted_strings = 0;\n"
    "standalone_single_quotes = 1; // TODO: what about identifiers?\n"
    "indentation_sensitive = 0;\n"
    "wrap_blocks_in_braces = 0;\n"
    "\n"
    "conf:api = custom;\n"
    "conf:api:style = free-form;\n"
    "conf:api:sigil = \"@@\";\n"
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
    "conf:tags:expression = \"@@\";\n"
    "conf:invert-captures = 0;\n"
    "conf:define:YYBACKUP = \"YYBACKUP\";\n"
    "conf:define:YYBACKUPCTX = \"YYBACKUPCTX\";\n"
    "conf:define:YYCONDTYPE = \"yycondtype\";\n"
    "conf:define:YYCOPYMTAG = \"@@{lhs} <- @@{rhs};\";\n"
    "conf:define:YYCOPYSTAG = \"@@{lhs} <- @@{rhs};\";\n"
    "conf:define:YYCTYPE = \"yyctype\";\n"
    "conf:define:YYCTXMARKER = \"YYCTXMARKER\";\n"
    "conf:define:YYCURSOR = \"YYCURSOR\";\n"
    "conf:define:YYDEBUG = \"YYDEBUG\";\n"
    "conf:define:YYFILL = \"YYFILL\";\n"
    "conf:define:YYFILL@len = \"@@\";\n"
    "conf:define:YYFILL:naked = 0;\n"
    "conf:define:YYGETCOND = \"YYGETCOND\";\n"
    "conf:define:YYGETCOND:naked = 0;\n"
    "conf:define:YYGETSTATE = \"YYGETSTATE\";\n"
    "conf:define:YYGETSTATE:naked = 0;\n"
    "conf:define:YYLESSTHAN = \"YYLESSTHAN\";\n"
    "conf:define:YYLIMIT = \"YYLIMIT\";\n"
    "conf:define:YYMARKER = \"YYMARKER\";\n"
    "conf:define:YYMAXFILL = \"yymaxfill\";\n"
    "conf:define:YYMAXNMATCH = \"yymaxnmatch\";\n"
    "conf:define:YYMTAGN = \"YYMTAGN\";\n"
    "conf:define:YYMTAGP = \"YYMTAGP\";\n"
    "conf:define:YYPEEK = \"YYPEEK\";\n"
    "conf:define:YYRESTORE = \"YYRESTORE\";\n"
    "conf:define:YYRESTORECTX = \"YYRESTORECTX\";\n"
    "conf:define:YYRESTORETAG = \"YYRESTORETAG\";\n"
    "conf:define:YYSETCOND = \"YYSETCOND\";\n"
    "conf:define:YYSETCOND@cond = \"@@\";\n"
    "conf:define:YYSETCOND:naked = 0;\n"
    "conf:define:YYSETSTATE = \"YYSETSTATE\";\n"
    "conf:define:YYSETSTATE:naked = 0;\n"
    "conf:define:YYSETSTATE@state = \"@@\";\n"
    "conf:define:YYSHIFT = \"YYSHIFT\";\n"
    "conf:define:YYSHIFTSTAG = \"YYSHIFTSTAG\";\n"
    "conf:define:YYSHIFTMTAG = \"YYSHIFTMTAG\";\n"
    "conf:define:YYSKIP = \"YYSKIP\";\n"
    "conf:define:YYSTAGN = \"YYSTAGN\";\n"
    "conf:define:YYSTAGP = \"YYSTAGP\";\n"
    "conf:define:YYFN = [\"<undefined-function-name>;<undefined-function-type>\"];\n"
    "conf:yyfn:sep = \";\";\n"
    "conf:variable:yyctable = \"yyctable\";\n"
    "conf:variable:yyaccept = \"yyaccept\";\n"
    "conf:variable:yytarget = \"yytarget\";\n"
    "conf:variable:yystate = \"yystate\";\n"
    "conf:variable:yych = \"yych\";\n"
    "conf:variable:yych:conversion = 0;\n"
    "conf:variable:yych:literals = char;\n"
    "conf:variable:yych:emit = (code_model.recursive_functions ? 0 : 1);\n"
    "conf:variable:yybm = \"yybm\";\n"
    "conf:variable:yybm:hex = 0;\n"
    "conf:variable:yyfill = \"\";\n"
    "conf:variable:yystable = \"\"; // deprecated\n"
    "conf:cond:abort = 0; // default case causes [redundant-case] warnings\n"
    "conf:cond:prefix = \"yyc_\";\n"
    "conf:cond:enumprefix = \"YYC_\";\n"
    "conf:cond:divider = \"(* *********************************** *)\";\n"
    "conf:cond:divider@cond = \"@@\";\n"
    "conf:cond:goto = \"\";\n"
    "conf:cond:goto@cond = \"@@\";\n"
    "conf:state:abort = 1;\n"
    "conf:state:nextlabel = 0;\n"
    "conf:bit-vectors = 0;\n"
    "conf:debug-output = 0;\n"
    "conf:computed-gotos = 0;\n"
    "conf:computed-gotos:threshold = 9;\n"
    "conf:nested-ifs = 0;\n"
    "conf:case-insensitive = 0;\n"
    "conf:case-inverted = 0;\n"
    "conf:case-ranges = 1;\n"
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
    "conf:label:yyloop = \"\";\n"
    "conf:label:yyNext = \"yyNext\";\n"
    "conf:label:start = 0;\n"
    "\n"
    "code:var_local = topindent \"let \" name \" = \" init \" in\" nl;\n"
    "code:var_global = topindent \"let \" name \" = \" init nl;\n"
    "\n"
    "code:const_local = topindent \"let \" name \" = \" init \" in\" nl;\n"
    "code:const_global = topindent \"let \" name \" = \" init nl;\n"
    "\n"
    "// code:array_local\n"
    "// code:array_global\n"
    "code:array_elem = array \".(\" index \")\";\n"
    "\n"
    "code:type_int = \"int\";\n"
    "code:type_uint = \"uint\";\n"
    "code:type_cond_enum = (storable_state? \"int\" : \"uint\");\n"
    "// code:type_yybm\n"
    "// code:type_yytarget\n"
    "\n"
    "code:assign = topindent lhs \" <- \" rhs \";\" nl;\n"
    "\n"
    "code:if_then_else =\n"
    "    [branch{0}: topindent \"if (\" cond \") then (\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    [branch{1:-1}: topindent \") else \" (have_cond? \"if (\" cond \") then \") \"(\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    topindent \")\" nl;\n"
    "\n"
    "code:if_then_else_oneline =\n"
    "    [branch{0}: topindent \"if (\" cond \") then \" [stmt: stmt] nl]\n"
    "    [branch{1:-1}: topindent \"else \" (have_cond? \"if (\" cond \") then \") [stmt: stmt] nl];\n"
    "\n"
    "code:switch =\n"
    "    topindent \"match \" expr \" with\" nl\n"
    "        indent [case: case] dedent;\n"
    "\n"
    "code:switch_cases =\n"
    "    [case{0:-2}: topindent \"| \" case nl]\n"
    "    [case{-1}:   topindent \"| \" case \" ->\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    ];\n"
    "\n"
    "code:switch_cases_oneline =\n"
    "    [case{0:-2}: topindent \"| \" case nl]\n"
    "    [case{-1}:   topindent \"| \" case \" -> \" [stmt: stmt] nl];\n"
    "\n"
    "// In OCaml only literals of type `char` support case ranges.\n"
    "// For `int`, we have to exlicitly list all range values. We cannot use\n"
    "//     `\"c when \" [val{0}: val] \" <= c && c <= \" [val{-1}: val]`\n"
    "// as it causes error when there are multiple cases:\n"
    "//     `Error: Variable c must occur on both sides of this | pattern`.\n"
    "code:switch_case_range = (char_literals\n"
    "    ? [val{0}: val] (multival ? \"..\" [val{-1}: val])\n"
    "    : [val{0}: val] [val{1:-1}: \"|\" val]);\n"
    "\n"
    "code:switch_case_default = \"_\";\n"
    "\n"
    "code:enum =\n"
    "    \"type \" name \" = \"\n"
    "        [elem{0}:          elem]\n"
    "        [elem{1:-1}: \" | \" elem]\n"
    "    nl;\n"
    "\n"
    "code:enum_elem = name;\n"
    "\n"
    "code:fndef =\n"
    "    name [arg: \" (\" argname \" : \" argtype \")\"] \" : \" type \" =\" nl\n"
    "        indent [stmt: stmt] dedent;\n"
    "\n"
    "code:fncall =\n"
    "    topindent (have_retval ? \"let \" retval \" = \")\n"
    "        \"(\" name \" [@tailcall])\" (have_args ? [arg: \" \" arg] : \" ()\") nl;\n"
    "\n"
    "code:tailcall = topindent \"(\" name \" [@tailcall])\" (have_args ? [arg: \" \" arg] : \" ()\") nl;\n"
    "\n"
    "code:recursive_functions =\n"
    "    [fn{0}:    \"let rec \" fndef nl]\n"
    "    [fn{1:-1}: \"and \"     fndef nl];\n"
    "\n"
    "code:fingerprint =\n"
    "    \"(* Generated by re2c\" (version? \" \" version) (date? \" on \" date) \" *)\" nl;\n"
    "\n"
    "code:line_info = \"#\" line \" \\\"\" file \"\\\"\" nl;\n"
    "\n"
    "code:abort = topindent \"raise (Failure \\\"internal lexer error\\\")\" nl;\n"
    "\n"
    "code:yydebug = topindent debug \" \" state \" \" char nl;\n"
    "\n"
    "code:yypeek = topindent \"let \" char \" = \" peek \" in\" nl;\n"
    "\n"
    "code:yyskip = topindent skip nl;\n"
    "\n"
    "code:yybackup = topindent backup nl;\n"
    "\n"
    "code:yybackupctx = topindent backupctx nl;\n"
    "\n"
    "code:yyrestore = topindent restore nl;\n"
    "\n"
    "code:yyrestorectx =\n"
    "    (fixed_on_cursor\n"
    "        ? topindent shift nl\n"
    "        : topindent (tags ? restoretag : restorectx) nl\n"
    "          (fixed ? topindent shift nl));\n"
    ;
