/**
 * Class IsPalindrome
 */
public class IsPalindrome {

    /**
     * Checks if a string is palindrome using recursion
     *
     * @param str a given string that must be checked for palindrome
     * @returns boolean
     */
    public boolean isPalindromeRecursion(String str) {
        if (str.length() < 2) {
            return true;
        }

        if (str.charAt(0) != str.charAt(str.length())) {
            return false;
        }

        return isPalindromeRecursion(str.substring(1, str.length() - 1));
    }
}
