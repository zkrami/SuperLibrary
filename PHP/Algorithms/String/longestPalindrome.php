<?php

require_once 'isPalindrome.php';

/**
 * Finds the longest palindrome in a given string
 *
 * @param string $string
 * @return string
 */
function findLongestPalindrome($string)
{
    if (isPalindromeIteration($string)) {
        return $string;
    }

    $stringLength = strlen($string);
    $longestPalindrome = '';
    $longestPalindromeLength = 1;

    for ($start = 0;$start < $stringLength - 1;$start++) {
        for ($subStringLength = 2;$subStringLength < $stringLength - $start + 1;$subStringLength++) {
            $subString = substr($string, $start, $subStringLength);
            if (isPalindromeIteration($subString)) {
                $tempSubStringLength = strlen($subString);
                if ($tempSubStringLength > $longestPalindromeLength) {
                    $longestPalindrome = $subString;
                    $longestPalindromeLength = $tempSubStringLength;
                }
            }
        }
    }

    if ($longestPalindromeLength == 1) {
        return $string[0];
    }

    return $longestPalindrome;
}
