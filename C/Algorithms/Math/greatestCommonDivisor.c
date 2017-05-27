/**
 * Calculates the greatest common divisor of two numbers using Euclidean algorithm
 *
 * @param int firstNumber
 * @param int secondNumber
 * @return int
 */
 int greatestCommonDivisor(int firstNumber, int secondNumber) {
    while (firstNumber != secondNumber) {
        if (firstNumber > secondNumber) {
            firstNumber -= secondNumber;
        } else {
            secondNumber -= firstNumber;
        }
    }

    return firstNumber;
}
