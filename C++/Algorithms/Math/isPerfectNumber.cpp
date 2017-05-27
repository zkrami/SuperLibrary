/**
 * Checks if a given number is perfect number
 *
 * @param int number
 * @return bool
 */
bool isPerfectNumber(int number) {
    int divisorsSum = 0;

    for (int i = 1;i <= number / 2;i++) {
        if (number % i == 0) {
            divisorsSum += i;
        }
    }

    return number == divisorsSum;
}