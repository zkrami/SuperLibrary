<?php

/**
 * Checks if a given number is perfect number
 *
 * @param int $number
 * @return bool
 */
function isPerfectNumber($number)
{
    $divisorsSum = 0;

    for ($i = 1;$i <= $number / 2;$i++) {
        if ($number % $i == 0) {
            $divisorsSum += $i;
        }
    }

    return $number == $divisorsSum;
}
