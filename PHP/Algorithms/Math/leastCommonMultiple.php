<?php

require_once 'greatestCommonDivisor.php';

/**
 * Calculates the least common multiple of two numbers
 *
 * @param int $firstNumber
 * @param int $secondNumber
 * @return int
 */
function leastCommonMultiple($firstNumber, $secondNumber)
{
    return abs($firstNumber * $secondNumber) / greatestCommonDivisor($firstNumber, $secondNumber);
}
