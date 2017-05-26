#include <algorithm>

/**
 * Returns the length of the longest common subsequence of two strings
 *
 * @param char *firstString
 * @param char *secondString
 * @param int i
 * @param int j
 * @return int
 */
int longestCommonSubsequenceLength(char *firstString, char *secondString, int i, int j)
{
    if (i == 0 || j == 0) {
        return 0;
    }

    if (firstString.charAt(i - 1) == secondString.charAt(j - 1)) {
        return 1 + longestCommonSubsequenceLength(firstString, secondString, i - 1, j - 1);
    } else {
        return std::max(longestCommonSubsequenceLength(firstString, secondString, i, j - 1),
                        longestCommonSubsequenceLength(firstString, secondString, i - 1, j));
    }
}