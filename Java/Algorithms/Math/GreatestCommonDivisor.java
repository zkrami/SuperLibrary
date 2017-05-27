/**
 * Class GreatestCommonDivisor
 */
public class GreatestCommonDivisor {
    /**
     * Calculates the greatest common divisor of two numbers using Euclidean algorithm
     *
     * @param int firstNumber a given integer
     * @param int secondNumber a given integer
     * @return int
     */
     public int greatestCommonDivisor(int firstNumber, int secondNumber) {
        while (firstNumber != secondNumber) {
            if (firstNumber > secondNumber) {
                firstNumber -= secondNumber;
            } else {
                secondNumber -= firstNumber;
            }
        }

        return firstNumber;
    }
}
