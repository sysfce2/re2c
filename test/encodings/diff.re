// re2c $INPUT -o $OUTPUT -ix
/*!re2c * {} [\x80-\x82]\[\x81] {} */
/*!re2c * {} [\x80-\x82]\"\x81" {} */
/*!re2c * {} [\x80-\x82]\("\x81") {} */
/*!re2c * {} [\x80-\x83]\("\x81"|"\x83") {} */
/*!re2c * {} [\x80-\x83]\("\x81"|"\x83"|"\x85") {} */
/*!re2c * {} ("\x80"|"\x81"|"\x82")\[\x81] {} */
/*!re2c * {} ("\x80"|"\x81"|"\x82")\"\x81" {} */
/*!re2c * {} ("\x80"|"\x81"|"\x82")\("\x81"|"\x83") {} */
/*!re2c * {} [\x80-\x82]\([\x80-\x82]\[\x80\x82]) {} */
/*!re2c * {} ([\x80-\x82]\[\x81])\[\x81] {} */
/*!re2c * {} ("\x80"|([\x82-\x83]\("\x83"|"\x85")))\(("\x80"|[\x81\x82])\[\x80\x82]) {} */