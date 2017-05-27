/**
 * Calculates the greatest common divisor of two numbers using recursion
 *
 * @param int firstNumber
 * @param int secondNumber
 * @return int
 */
 int greatestCommonDivisor(int firstNumber, int secondNumber) {
    if (firstNumber == 0) {
        return secondNumber;
    }

    return greatestCommonDivisor(secondNumber % firstNumber, firstNumber);
}