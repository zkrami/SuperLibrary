/**
 * Class Factorial
 */
public class Factorial {

    /**
     * Calculates the factorial of a number using recursion
     *
     * @param int number
     * @return int
     */
    public int factorialRecursion(int number) {
        if (number == 0) {
            return 1;
        }

        return number * factorialRecursion(number - 1);
    }
}
