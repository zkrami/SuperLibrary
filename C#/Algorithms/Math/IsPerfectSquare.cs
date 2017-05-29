/**
 * Class IsPerfectSquare
 */
public class IsPerfectSquare {

    /**
     * Checks if a given number is perfect square
     *
     * @param int number
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
