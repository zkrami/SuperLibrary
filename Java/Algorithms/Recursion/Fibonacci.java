/**
 * Class Fibonacci
 */
public class Fibonacci {

    /**
     * Calculates the Fibonacci number at the given index using recursion
     *
     * @param index a given index value
     * @return int
     */
    public int fibonacciRecursion(int index) {
        if (index == 0 || index == 1) {
            return 1;
        }

        return fibonacciRecursion(index - 1) + fibonacciRecursion(index - 2);
    }
}
