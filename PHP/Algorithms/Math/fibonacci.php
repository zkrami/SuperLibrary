<?php

/**
 * Calculates the Fibonacci number at the given index using iteration
 *
 * @param int $index
 * @return int
 */
function fibonacciIteration($index) {
    $a = 0;
    $b = 0;
    $c = 1;

    for ($i = 0;$i < $index;$i++) {
        $a = $b;
        $b = $c;
        $c = $a + $b;
    }

    return $c;
}
