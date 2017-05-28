#include "greatestCommonMultiple.cpp"
#include <cmath>

/**
 * Calculates the least common multiple of two numbers
 *
 * @param int firstNumber
 * @param int secondNumber
 * @return int
 */
int leastCommonMultiple(int firstNumber, int secondNumber)
{
    return abs(firstNumber * secondNumber) / greatestCommonDivisor(firstNumber, secondNumber);
}