<?php

/**
 * Checks if a given number is perfect square
 *
 * @param int $number
 * @return bool
 */
function isPerfectSquare($number)
{
    $i = 0;
    while ($i * $i < $number) {
        $i++;
    }

    return $i * $i == $number;
}
