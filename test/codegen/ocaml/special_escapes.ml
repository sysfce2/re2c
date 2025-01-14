(* Generated by re2ocaml *)
(* re2ocaml $INPUT -o $OUTPUT -i *)

open String

type state = {
    yyinput: string;
    mutable yycursor: int;
    mutable yymarker: int;
}


let rec yy0 (yyrecord : state) : bool =
    let yych = unsafe_get yyrecord.yyinput yyrecord.yycursor in
    yyrecord.yycursor <- yyrecord.yycursor + 1;
    match yych with
        | '\x07' -> (yy3 [@tailcall]) yyrecord
        | _ -> (yy1 [@tailcall]) yyrecord

and yy1 (yyrecord : state) : bool =
    (yy2 [@tailcall]) yyrecord

and yy2 (yyrecord : state) : bool =
    false

and yy3 (yyrecord : state) : bool =
    yyrecord.yymarker <- yyrecord.yycursor;
    let yych = unsafe_get yyrecord.yyinput yyrecord.yycursor in
    match yych with
        | '\b' ->
            yyrecord.yycursor <- yyrecord.yycursor + 1;
            (yy4 [@tailcall]) yyrecord
        | _ -> (yy2 [@tailcall]) yyrecord

and yy4 (yyrecord : state) : bool =
    let yych = unsafe_get yyrecord.yyinput yyrecord.yycursor in
    match yych with
        | '\x0C' ->
            yyrecord.yycursor <- yyrecord.yycursor + 1;
            (yy6 [@tailcall]) yyrecord
        | _ -> (yy5 [@tailcall]) yyrecord

and yy5 (yyrecord : state) : bool =
    yyrecord.yycursor <- yyrecord.yymarker;
    (yy2 [@tailcall]) yyrecord

and yy6 (yyrecord : state) : bool =
    let yych = unsafe_get yyrecord.yyinput yyrecord.yycursor in
    match yych with
        | '\n' ->
            yyrecord.yycursor <- yyrecord.yycursor + 1;
            (yy7 [@tailcall]) yyrecord
        | _ -> (yy5 [@tailcall]) yyrecord

and yy7 (yyrecord : state) : bool =
    let yych = unsafe_get yyrecord.yyinput yyrecord.yycursor in
    match yych with
        | '\r' ->
            yyrecord.yycursor <- yyrecord.yycursor + 1;
            (yy8 [@tailcall]) yyrecord
        | _ -> (yy5 [@tailcall]) yyrecord

and yy8 (yyrecord : state) : bool =
    let yych = unsafe_get yyrecord.yyinput yyrecord.yycursor in
    match yych with
        | '\t' ->
            yyrecord.yycursor <- yyrecord.yycursor + 1;
            (yy9 [@tailcall]) yyrecord
        | _ -> (yy5 [@tailcall]) yyrecord

and yy9 (yyrecord : state) : bool =
    let yych = unsafe_get yyrecord.yyinput yyrecord.yycursor in
    match yych with
        | '\x0B' ->
            yyrecord.yycursor <- yyrecord.yycursor + 1;
            (yy10 [@tailcall]) yyrecord
        | _ -> (yy5 [@tailcall]) yyrecord

and yy10 (yyrecord : state) : bool =
    let yych = unsafe_get yyrecord.yyinput yyrecord.yycursor in
    match yych with
        | '\\' ->
            yyrecord.yycursor <- yyrecord.yycursor + 1;
            (yy11 [@tailcall]) yyrecord
        | _ -> (yy5 [@tailcall]) yyrecord

and yy11 (yyrecord : state) : bool =
    let yych = unsafe_get yyrecord.yyinput yyrecord.yycursor in
    match yych with
        | '\'' ->
            yyrecord.yycursor <- yyrecord.yycursor + 1;
            (yy12 [@tailcall]) yyrecord
        | _ -> (yy5 [@tailcall]) yyrecord

and yy12 (yyrecord : state) : bool =
    let yych = unsafe_get yyrecord.yyinput yyrecord.yycursor in
    match yych with
        | '"' ->
            yyrecord.yycursor <- yyrecord.yycursor + 1;
            (yy13 [@tailcall]) yyrecord
        | _ -> (yy5 [@tailcall]) yyrecord

and yy13 (yyrecord : state) : bool =
    true

and lex (yyrecord : state) : bool =
    (yy0 [@tailcall]) yyrecord



let main () =
    let st = {yyinput = "\x07\x08\x0c\x0a\x0d\x09\x0b\\'\""; yycursor = 0; yymarker = 0}
    in if not (lex st) then raise (Failure "error")

let _ = main ()