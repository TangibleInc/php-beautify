<?php

$var = array();
$var = [];
$var = array(1,2,3);
$var = [1,2,3];
echo $var[1];
$foo = [$var[1],$var[2]];
$foo = [
        1,
        [2],
        3
       ];

// Short list, not short array.
[$a, [$b]] = $array;

// Short array in short list. Short list should be left untouched, short array should be fixed.
['key' => $a, ['key'] => $b] = $array;
