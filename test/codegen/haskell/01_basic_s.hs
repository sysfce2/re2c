-- Generated by re2hs
-- re2hs $INPUT -o $OUTPUT -is --api custom
{-# LANGUAGE OverloadedStrings #-}

import Data.ByteString as BS


yy0 :: BS.ByteString -> Int -> Bool
yy0 _str _cur =
    let yych = BS.index _str _cur in
    let _cur' = _cur + 1 in let _cur = _cur' in
    if yych <= 0x30 then yy1 _str _cur
    else if yych <= 0x39 then yy2 _str _cur
    else yy1 _str _cur

yy1 :: BS.ByteString -> Int -> Bool
yy1 _str _cur =
    False

yy2 :: BS.ByteString -> Int -> Bool
yy2 _str _cur =
    let yych = BS.index _str _cur in
    if yych <= 0x2F then
        yy3 _str _cur
    else if yych <= 0x39 then
        let _cur' = _cur + 1 in let _cur = _cur' in
        yy2 _str _cur
    else
        yy3 _str _cur

yy3 :: BS.ByteString -> Int -> Bool
yy3 _str _cur =
    True

lexer :: BS.ByteString -> Int -> Bool
lexer _str _cur =
    yy0 _str _cur



main :: IO ()
main = case lexer "1234\0" 0 of
    True -> return ()
    False -> error "lexer failed!"
