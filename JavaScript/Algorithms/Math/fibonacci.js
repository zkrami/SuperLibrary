/**
 * Calculates the Fibonacci number at the given index using iteration
 *
 * @param {int} index
 * @return int
 */
function fibonacciIteration(index) {
    var a = 0;
    var b = 0;
    var c = 1;

    for (var i = 0;i < index;i++) {
        a = b;
        b = c;
        c = a + b;
    }

    return c;
}