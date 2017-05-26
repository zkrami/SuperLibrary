/**
 * Calculates the factorial of a number using iteration
 *
 * @param int number
 * @return int
 */
int factorialIteration(int number) {
    int factorial = 1;

    for (int i = 2;i < number + 1;i++) {
        factorial *= i;
    }

    return factorial;
}