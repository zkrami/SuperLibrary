<?php

/**
 * Calculates the factorial of a number using iteration
 *
 * @param int $number
 * @return int
 */
function factorialIteration($number) {
    $factorial = 1;

    for ($i = 2;$i < $number + 1;$i++) {
        $factorial *= $i;
    }

    return $factorial;
}
