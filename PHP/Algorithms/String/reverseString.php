<?php

/**
 * Reverses the given string
 *
 * @param string $string
 * @return string
 */
function reverseString($string)
{
    $reverseString = '';
    $length = strlen($string);

    for ($i = $length - 1;$i > -1;$i--) {
        $reverseString .= $string[$i];
    }

    return $reverseString;
}
