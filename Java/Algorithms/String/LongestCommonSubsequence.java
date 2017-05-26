import java.lang.*;

/**
 * Class LongestCommonSubsequenceLength
 */
public class LongestCommonSubsequenceLength {

    /**
     * Rreturns the length of the longest common subsequence of two strings
     *
     * @param firstString a given string
     * @param secondString a given string
     * @param i first string length
     * @param j second string length
     * @return int
     */
    public int longestCommonSubsequenceLength(String firstString, String secondString, int i, int j) {
        if (i == 0 || j == 0) {
            return 0;
        }

        if (firstString.charAt(i - 1) == secondString.charAt(j - 1)) {
            return 1 + longestCommonSubsequenceLength(firstString, secondString, i - 1, j - 1);
        } else {
            return Math.max(longestCommonSubsequenceLength(firstString, secondString, i, j - 1),
                            longestCommonSubsequenceLength(firstString, secondString, i - 1, j));
        }
    }
}
