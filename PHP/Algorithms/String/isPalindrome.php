<?php

/**
 * Checks if a string is palindrome using iteration
 *
 * @param string $string
 * @return bool
 */
function isPalindromeIteration($string)
{
    $length = strlen($string);

    for ($i = 0, $j = $length - 1;$i <= $length / 2 && $j >= $length / 2;$i++, $j--) {
        if ($string[$i] != $string[$j]) {
            return false;
        }
    }

    return true;
}
