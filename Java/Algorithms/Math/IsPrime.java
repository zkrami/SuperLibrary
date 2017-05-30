/**
 * Class IsPrime
 */
public class IsPrime {

    /**
     * Checks if a given number is prime
     *
     * @param int number a given number
     * @return boolean
     */
    public boolean isPrime(int number)
    {
        for (int i = 2;i <= number / 2;i++) {
            if (number % i == 0) {
                return false;
            }
        }

        return true;
    }
}
