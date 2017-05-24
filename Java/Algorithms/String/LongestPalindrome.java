/**
 * Class LongestPalindrome
 */
public class LongestPalindrome {

    /**
     * Finds the longest palindrome in a given string
     *
     * @param str a given string in which the longest palindrome must be found
     * @return String
     */
    public String findLongestPalindrome(String str) {
        IsPalindrome isPalindrome = new IsPalindrome();

        if (isPalindrome.isPalindromeIteration(str)) {
            return str;
        }

        int stringLength = str.length();
        String longestPalindrome = "";
        int longestPalindromeLength = 1;

        for (int start = 0;start < stringLength - 1;start++) {
            for (int end = start + 3;end < stringLength + 1;end++) {
                String subString = str.substring(start, end);
                if (isPalindrome.isPalindromeIteration(subString)) {
                    int tempSubStringLength = subString.length();
                    if (tempSubStringLength > longestPalindromeLength) {
                        longestPalindrome = subString;
                        longestPalindromeLength = tempSubStringLength;
                    }
                }
            }
        }

        if (longestPalindromeLength == 1) {
            return String.valueOf(str.charAt(0));
        }

        return longestPalindrome;
    }
}
