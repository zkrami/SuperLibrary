/**
 * Calculates the Fibonacci number at the given index using iteration
 *
 * @param int index
 * @return int
 */
int fibonacciIteration(int index) {
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