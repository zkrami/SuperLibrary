/**
 * Class IsPrime
 */
public class IsPrime {

    /**
     * Checks if a given number is prime
     *
     * @param int number
     * @return bool
     */
    public bool isPrime(int number)
    {
        for (int i = 2;i <= number / 2;i++) {
            if (number % i == 0) {
                return false;
            }
        }

        return true;
    }
}