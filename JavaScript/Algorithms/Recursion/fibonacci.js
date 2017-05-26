/**
 * Calculates the Fibonacci number at the given index using recursion
 *
 * @param {int} index
 * @return int
 */
function fibonacciRecursion(index) {
    if (index == 0 || index == 1) {
        return 1;
    }

    return fibonacciRecursion(index - 1) + fibonacciRecursion(index - 2);
}