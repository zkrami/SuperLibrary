/**
 * Class LeastCommonMultiple
 */
public class LeastCommonMultiple {

    /**
     * Calculates the least common multiple of two numbers
     *
     * @param int firstNumber
     * @param int secondNumber
     * @return int
     */
    public int leastCommonMultiple(int firstNumber, int secondNumber)
    {
        GreatestCommonDivisor gcd = new GreatestCommonDivisor();

        return Math.Abs(firstNumber * secondNumber) / gcd.greatestCommonDivisor(firstNumber, secondNumber);
    }
}
