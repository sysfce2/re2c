(* Generated by re2ocaml *)
#1 "ocaml/submatch/03_posix.re"
(* re2ocaml $INPUT -o $OUTPUT *)

open String

(* Maximum number of capturing groups among all rules. *)
#9 "ocaml/submatch/03_posix.ml"
let yymaxnmatch = 4
#6 "ocaml/submatch/03_posix.re"


type state = {
    yyinput: string;
    mutable yycursor: int;
    mutable yymarker: int;
    mutable yynmatch: int; (* number of capturing groups *)
    mutable yypmatch: int array; (* memory for capturing parentheses *)
    
#21 "ocaml/submatch/03_posix.ml"

	mutable yyt1: int;
	mutable yyt2: int;
	mutable yyt3: int;
	mutable yyt4: int;
	mutable yyt5: int;
#14 "ocaml/submatch/03_posix.re"

}

type semver = {
    major: int;
    minor: int;
    patch: int;
}

let s2n (str: string) (i1: int) (i2: int) : int =
    let rec f s i j n =
        if i >= j then n else f s (i + 1) j (n * 10 + Char.code s.[i] - 48)
    in f str i1 i2 0


#44 "ocaml/submatch/03_posix.ml"
let rec yy0 (st : state) : semver option =
	let yych = get st.yyinput st.yycursor in
	match yych with
		| '0'..'9' ->
			st.yyt1 <- st.yycursor;
			st.yycursor <- st.yycursor + 1;
			(yy3 [@tailcall]) st
		| _ ->
			st.yycursor <- st.yycursor + 1;
			(yy1 [@tailcall]) st

and yy1 (st : state) : semver option =
	(yy2 [@tailcall]) st

and yy2 (st : state) : semver option =
#47 "ocaml/submatch/03_posix.re"
	None
#62 "ocaml/submatch/03_posix.ml"

and yy3 (st : state) : semver option =
	st.yymarker <- st.yycursor;
	let yych = get st.yyinput st.yycursor in
	match yych with
		| '.' ->
			st.yycursor <- st.yycursor + 1;
			(yy4 [@tailcall]) st
		| '0'..'9' ->
			st.yycursor <- st.yycursor + 1;
			(yy6 [@tailcall]) st
		| _ -> (yy2 [@tailcall]) st

and yy4 (st : state) : semver option =
	let yych = get st.yyinput st.yycursor in
	match yych with
		| '0'..'9' ->
			st.yyt2 <- st.yycursor;
			st.yycursor <- st.yycursor + 1;
			(yy7 [@tailcall]) st
		| _ -> (yy5 [@tailcall]) st

and yy5 (st : state) : semver option =
	st.yycursor <- st.yymarker;
	(yy2 [@tailcall]) st

and yy6 (st : state) : semver option =
	let yych = get st.yyinput st.yycursor in
	match yych with
		| '.' ->
			st.yycursor <- st.yycursor + 1;
			(yy4 [@tailcall]) st
		| '0'..'9' ->
			st.yycursor <- st.yycursor + 1;
			(yy6 [@tailcall]) st
		| _ -> (yy5 [@tailcall]) st

and yy7 (st : state) : semver option =
	let yych = get st.yyinput st.yycursor in
	match yych with
		| '\x00' ->
			st.yyt3 <- st.yycursor;
			st.yyt4 <- -1;
			st.yyt5 <- -1;
			st.yycursor <- st.yycursor + 1;
			(yy8 [@tailcall]) st
		| '.' ->
			st.yyt3 <- st.yycursor;
			st.yyt5 <- st.yycursor;
			st.yycursor <- st.yycursor + 1;
			(yy9 [@tailcall]) st
		| '0'..'9' ->
			st.yycursor <- st.yycursor + 1;
			(yy7 [@tailcall]) st
		| _ -> (yy5 [@tailcall]) st

and yy8 (st : state) : semver option =
	st.yynmatch <- 4;
	st.yypmatch.(2) <- st.yyt1;
	st.yypmatch.(4) <- st.yyt2;
	st.yypmatch.(5) <- st.yyt3;
	st.yypmatch.(6) <- st.yyt5;
	st.yypmatch.(7) <- st.yyt4;
	st.yypmatch.(0) <- st.yyt1;
	st.yypmatch.(1) <- st.yycursor;
	st.yypmatch.(3) <- st.yyt2;
	st.yypmatch.(3) <- st.yypmatch.(3) - 1;
#37 "ocaml/submatch/03_posix.re"
	
        (* Even `yypmatch` values are for opening parentheses, odd values
           are for closing parentheses, the first group is the whole match. *)
        Some {
            major = s2n st.yyinput st.yypmatch.(2) st.yypmatch.(3);
            minor = s2n st.yyinput st.yypmatch.(4) st.yypmatch.(5);
            patch = if st.yypmatch.(6) = -1 then 0
                else s2n st.yyinput (st.yypmatch.(6) + 1) st.yypmatch.(7)
        }

#141 "ocaml/submatch/03_posix.ml"

and yy9 (st : state) : semver option =
	let yych = get st.yyinput st.yycursor in
	if (yych <= '\x00') then (yy5 [@tailcall]) st
	else (yy11 [@tailcall]) st yych

and yy10 (st : state) : semver option =
	let yych = get st.yyinput st.yycursor in
	(yy11 [@tailcall]) st yych

and yy11 (st : state) (yych : char) : semver option =
	match yych with
		| '\x00' ->
			st.yyt4 <- st.yycursor;
			st.yycursor <- st.yycursor + 1;
			(yy8 [@tailcall]) st
		| '0'..'9' ->
			st.yycursor <- st.yycursor + 1;
			(yy10 [@tailcall]) st
		| _ -> (yy5 [@tailcall]) st

and parse (st : state) : semver option =
	(yy0 [@tailcall]) st

#48 "ocaml/submatch/03_posix.re"


let test (str: string) (result: semver option) =
    let st = {
        yyinput = str;
        yycursor = 0;
        yymarker = 0;
        yynmatch = 0;
        yypmatch = Array.make (2 * yymaxnmatch) (-1);
        
#177 "ocaml/submatch/03_posix.ml"

		yyt1 = -1;
		yyt2 = -1;
		yyt3 = -1;
		yyt4 = -1;
		yyt5 = -1;
#57 "ocaml/submatch/03_posix.re"

    }
    in if not (parse st = result) then raise (Failure "error")

let main () =
    test "23.34\x00" (Some {major = 23; minor = 34; patch = 0});
    test "1.2.99999\x00" (Some {major = 1; minor = 2; patch = 99999});
    test "1.a\x00" None

let _ = main ()
