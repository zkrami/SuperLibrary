/**
 * Class Fibonacci
 */
public class Fibonacci {

    /**
     * Calculates the Fibonacci number at the given index using iteration
     *
     * @param index a given index value
     * @return int
     */
    public int fibonacciIteration(int index) {
        int a = 0;
        int b = 0;
        int c = 1;

        for (int i = 0;i < index;i++) {
            a = b;
            b = c;
            c = a + b;
        }

        return c;
    }
}
