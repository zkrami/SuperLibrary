/**
 * Class LongestPalindrome
 */
public class LongestPalindrome {

    /**
     * Finds the longest palindrome in a given string
     *
     * @param string str
     * @return string
     */
    public string findLongestPalindrome(string str) {
        IsPalindrome isPalindrome = new IsPalindrome();

        if (isPalindrome.isPalindromeIteration(str)) {
            return str;
        }

        int stringLength = str.Length;
        string longestPalindrome = "";
        int longestPalindromeLength = 1;

        for (int start = 0;start < stringLength - 1;start++) {
            for (int subStringLength = start + 2;subStringLength < stringLength - start + 1;subStringLength++) {
                string subString = str.Substring(start, subStringLength);
                if (isPalindrome.isPalindromeIteration(subString)) {
                    int tempSubStringLength = subString.Length;
                    if (tempSubStringLength > longestPalindromeLength) {
                        longestPalindrome = subString;
                        longestPalindromeLength = tempSubStringLength;
                    }
                }
            }
        }

        if (longestPalindromeLength == 1) {
            return str[0].ToString();
        }

        return longestPalindrome;
    }
}