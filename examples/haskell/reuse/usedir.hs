-- Generated by re2hs
{-# LANGUAGE RecordWildCards #-}
#1 "haskell/reuse/usedir.re"
-- re2hs $INPUT -o $OUTPUT
{-# OPTIONS_GHC -Wno-unused-record-wildcards #-}
{-# LANGUAGE OverloadedStrings #-}

-- This example shows how to combine reusable re2c blocks: two blocks
-- ('colors' and 'fish') are merged into one. The 'salmon' rule occurs
-- in both blocks; the 'fish' block takes priority because it is used
-- earlier. Default rule * occurs in all three blocks; the local (not
-- inherited) definition takes priority.

import Control.Monad (when)
import Data.ByteString (ByteString, index)

data Answer = Color | Fish | Dunno deriving (Eq)

data State = State {
    _yyinput :: ByteString,
    _yycursor :: Int,
    _yymarker :: Int
}

#25 "haskell/reuse/usedir.re"


#30 "haskell/reuse/usedir.re"



#33 "haskell/reuse/usedir.hs"
yy0 :: State -> Answer
yy0 State{..} =
    let yych = index _yyinput _yycursor in
    let __ = _yycursor + 1 in let _yycursor = __ in
    case yych of
        _c | 0x65 == _c ->
            yy3 State{..}
        _c | 0x68 == _c ->
            yy4 State{..}
        _c | 0x6D == _c ->
            yy5 State{..}
        _c | 0x72 == _c ->
            yy6 State{..}
        _c | 0x73 == _c ->
            yy7 State{..}
        _c | True ->
            yy1 State{..}

yy1 :: State -> Answer
yy1 State{..} =
    yy2 State{..}

yy2 :: State -> Answer
yy2 State{..} =
#38 "haskell/reuse/usedir.re"
    Dunno
#60 "haskell/reuse/usedir.hs"

yy3 :: State -> Answer
yy3 State{..} =
    let _yymarker = _yycursor in
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x65 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy8 State{..}
        _c | True ->
            yy2 State{..}

yy4 :: State -> Answer
yy4 State{..} =
    let _yymarker = _yycursor in
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x61 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy10 State{..}
        _c | True ->
            yy2 State{..}

yy5 :: State -> Answer
yy5 State{..} =
    let _yymarker = _yycursor in
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x61 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy11 State{..}
        _c | True ->
            yy2 State{..}

yy6 :: State -> Answer
yy6 State{..} =
    let _yymarker = _yycursor in
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x65 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy12 State{..}
        _c | True ->
            yy2 State{..}

yy7 :: State -> Answer
yy7 State{..} =
    let _yymarker = _yycursor in
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x61 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy13 State{..}
        _c | True ->
            yy2 State{..}

yy8 :: State -> Answer
yy8 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x6C == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy14 State{..}
        _c | True ->
            yy9 State{..}

yy9 :: State -> Answer
yy9 State{..} =
    let _yycursor = _yymarker in
    yy2 State{..}

yy10 :: State -> Answer
yy10 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x64 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy15 State{..}
        _c | True ->
            yy9 State{..}

yy11 :: State -> Answer
yy11 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x67 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy16 State{..}
        _c | True ->
            yy9 State{..}

yy12 :: State -> Answer
yy12 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x64 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy17 State{..}
        _c | True ->
            yy9 State{..}

yy13 :: State -> Answer
yy13 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x6C == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy18 State{..}
        _c | True ->
            yy9 State{..}

yy14 :: State -> Answer
yy14 State{..} =
#29 "haskell/reuse/usedir.re"
    Fish
#176 "haskell/reuse/usedir.hs"

yy15 :: State -> Answer
yy15 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x64 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy19 State{..}
        _c | True ->
            yy9 State{..}

yy16 :: State -> Answer
yy16 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x65 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy20 State{..}
        _c | True ->
            yy9 State{..}

yy17 :: State -> Answer
yy17 State{..} =
#24 "haskell/reuse/usedir.re"
    Color
#202 "haskell/reuse/usedir.hs"

yy18 :: State -> Answer
yy18 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x6D == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy21 State{..}
        _c | True ->
            yy9 State{..}

yy19 :: State -> Answer
yy19 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x6F == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy22 State{..}
        _c | True ->
            yy9 State{..}

yy20 :: State -> Answer
yy20 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x6E == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy23 State{..}
        _c | True ->
            yy9 State{..}

yy21 :: State -> Answer
yy21 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x6F == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy24 State{..}
        _c | True ->
            yy9 State{..}

yy22 :: State -> Answer
yy22 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x63 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy25 State{..}
        _c | True ->
            yy9 State{..}

yy23 :: State -> Answer
yy23 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x74 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy26 State{..}
        _c | True ->
            yy9 State{..}

yy24 :: State -> Answer
yy24 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x6E == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy14 State{..}
        _c | True ->
            yy9 State{..}

yy25 :: State -> Answer
yy25 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x6B == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy14 State{..}
        _c | True ->
            yy9 State{..}

yy26 :: State -> Answer
yy26 State{..} =
    let yych = index _yyinput _yycursor in
    case yych of
        _c | 0x61 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy17 State{..}
        _c | True ->
            yy9 State{..}

lexer :: State -> Answer
lexer State{..} =
    yy0 State{..}

#39 "haskell/reuse/usedir.re"


main :: IO ()
main = do
    let test str ans = do
            let st = State {_yyinput = str, _yycursor = 0, _yymarker = 0}
            when (lexer st /= ans) $ error "failed"

    test "salmon" Fish
    test "what?" Dunno
