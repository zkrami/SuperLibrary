/**
 * Class ReverseString
 */
public class ReverseString {
    /**
     * Reverses the given string
     *
     * @param str a given string that must be reversed
     * @return String
     */
    public String reverseString(String str) {
        String reverseString = "";
        int length = str.length();

        for (int i = length - 1;i > -1;i--) {
            reverseString += str.charAt(i);
        }

        return reverseString;
    }
}
