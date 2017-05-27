<?php

/**
 * Calculates the greatest common divisor of two numbers using recursion
 *
 * @param int $firstNumber
 * @param int $secondNumber
 * @return int
 */
function greatestCommonDivisor($firstNumber, $secondNumber) {
    if ($firstNumber == 0) {
        return $secondNumber;
    }

    return greatestCommonDivisor($secondNumber % $firstNumber, $firstNumber);
}
