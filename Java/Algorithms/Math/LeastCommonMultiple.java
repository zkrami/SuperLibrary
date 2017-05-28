import java.lang.*;

/**
 * Class LeastCommonMultiple
 */
public class LeastCommonMultiple {

    /**
     * Calculates the least common multiple of two numbers
     *
     * @param int firstNumber a given integer
     * @param int secondNumber a given integer
     * @return int
     */
    public int leastCommonMultiple(int firstNumber, int secondNumber)
    {
        return Math.abs(firstNumber * secondNumber) / greatestCommonDivisor(firstNumber, secondNumber);
    }
}
