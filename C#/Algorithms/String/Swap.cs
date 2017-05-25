/**
 * Class Swap
 */
public class Swap {
    /**
     * Swaps the characters of a given string
     *
     * @param string str
     * @param int i 
     * @param int j 
     * @return string
     */
    public string swap(string str, int i, int j) {
        return str.Substring(0, i) +
               str[j] +
               str.Substring(i + 1, j - i - 1) +
               str[i] +
               str.Substring(j + 1);
    }
}