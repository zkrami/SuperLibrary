/**
 * Class isPalindrome
 */
public class isPalindrome {

    /**
     * Checks if a string is palindrome using iteration
     *
     * @param String str
     * @returns boolean
     */
    public boolean isPalindrome(String str) {
        int length = str.length();

        for (int i = 0, j = length - 1;i <= length / 2 && j >= length / 2;i++, j--) {
            if (str.charAt(i) != str.charAt(j)) {
                return false;
            }
        }

        return true;
    }
}
