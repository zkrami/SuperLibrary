/**
 * Class IsPalindrome
 */
public class IsPalindrome {

    /**
     * Checks if a string is palindrome using iteration
     *
     * @param str a given string that must be checked for palindrome
     * @returns boolean
     */
    public boolean isPalindromeIteration(String str) {
        int length = str.length();

        for (int i = 0, j = length - 1;i <= length / 2 && j >= length / 2;i++, j--) {
            if (str.charAt(i) != str.charAt(j)) {
                return false;
            }
        }

        return true;
    }
}
