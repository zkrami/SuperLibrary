<?php

/**
 * Swaps the characters of a given string
 *
 * @param string $string
 * @param int $i
 * @param int $j
 */
function swap(&$string, $i, $j)
{
    $temp = $string[$i];
    $string[$i] = $string[$j];
    $string[$j] = $temp;
}
