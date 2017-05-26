using System;

/**
 * Class LongestCommonSubsequenceLength
 */
public class LongestCommonSubsequenceLength {

    /**
     * Returns the length of the longest common subsequence of two strings
     *
     * @param string firstString
     * @param string secondString
     * @param int i
     * @param int j
     * @return int
     */
    public int longestCommonSubsequenceLength(string firstString, string secondString, int i, int j) {
        if (i == 0 || j == 0) {
            return 0;
        }

        if (firstString[i - 1] == secondString[j - 1]) {
            return 1 + longestCommonSubsequenceLength(firstString, secondString, i - 1, j - 1);
        } else {
            return Math.Max(longestCommonSubsequenceLength(firstString, secondString, i, j - 1),
                            longestCommonSubsequenceLength(firstString, secondString, i - 1, j));
        }
    }
}
