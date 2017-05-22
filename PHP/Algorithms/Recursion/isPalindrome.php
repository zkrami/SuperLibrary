<?php

/**
 * Checks if a string is palindrome using recursion
 *
 * @param $string
 * @return bool
 */
function isPalindromeRecursion($string)
{
    if (strlen($string) < 2) {
        return true;
    }

    if ($string[0] != $string[strlen($string) - 1]) {
        return false;
    }

    return isPalindromeRecursion(substr($string, 1, strlen($string) - 2));
}
