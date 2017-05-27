/**
 * Class IsPerfectNumber
 */
public class IsPerfectNumber {

    /**
     * Checks if a given number is perfect number
     *
     * @param number a given number
     * @return int
     */
    public boolean isPerfectNumber(int number) {
        int divisorsSum = 0;

        for (int i = 1;i <= number / 2;i++) {
            if (number % i == 0) {
                divisorsSum += i;
            }
        }

        return number == divisorsSum;
    }
}
