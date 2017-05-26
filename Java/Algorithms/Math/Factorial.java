/**
 * Class Factorial
 */
public class Factorial {

    /**
     * Calculates the factorial of a number using iteration
     *
     * @param number a given number
     * @return int
     */
    public int factorialIteration(int number) {
        int factorial = 1;

        for (int i = 2;i < number + 1;i++) {
            factorial *= i;
        }

        return factorial;
    }
}
