<?php

/**
 * Checks if a given number is prime
 *
 * @param int $number
 * @return bool
 */
function isPrime($number)
{
    for ($i = 2;$i <= $number / 2;$i++) {
        if ($number % $i == 0) {
            return false;
        }
    }

    return true;
}
