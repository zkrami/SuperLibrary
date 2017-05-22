/**
 * Class isPalindrome
 */
public class isPalindrome {

    /**
     * Checks if a string is palindrome using recursion
     *
     * @param String str
     * @returns boolean
     */
    public boolean isPalindrome(String str) {
        if (str.length() < 2) {
            return true;
        }

        if (str.charAt(0) != str.charAt(str.length())) {
            return false;
        }

        return isPalindrome(str.substring(1, str.length() - 1));
    }
}
