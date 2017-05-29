/**
 * Class IsPerfectSquare
 */
public class IsPerfectSquare {

    /**
     * Checks if a given number is perfect square
     *
     * @param number a given number
     * @return bool
     */
    public bool isPerfectSquare(int number) {
        int i = 0;
        while (i * i < number) {
            i++;
        }

        return i * i == number;
    }
}
