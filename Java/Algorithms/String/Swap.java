/**
 * Class Swap
 */
public class Swap {
    /**
     * Swaps the characters of a given string
     *
     * @param str a given string
     * @param i the index of the first character
     * @param j the index of the second character
     * @return String
     */
    public static String swa(String str, int i, int j) {
        return str.substring(0, i) +
               str.charAt(j) +
               str.substring(i + 1, j) +
               str.charAt(i) +
               str.substring(j + 1);
    }
}
