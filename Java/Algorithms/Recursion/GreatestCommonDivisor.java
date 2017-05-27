/**
 * Class GreatestCommonDivisor
 */
public class GreatestCommonDivisor {
    /**
     * Calculates the greatest common divisor of two numbers using recursion
     *
     * @param int firstNumber a given integer
     * @param int secondNumber a given integer
     * @return int
     */
     public int greatestCommonDivisor(int firstNumber, int secondNumber) {
        if (firstNumber == 0) {
            return secondNumber;
        }

        return greatestCommonDivisor(secondNumber % firstNumber, firstNumber);
    }
}
