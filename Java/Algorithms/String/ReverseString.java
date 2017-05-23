/**
 * Class ReverseString
 */
public class ReverseString {
    /**
     * Reverses the given string
     *
     * @param String string
     * @return String
     */
    public String reverseString(String string) {
        String reverseString = "";
        int length = string.length();

        for (int i = length - 1;i > -1;i--) {
            reverseString += string.charAt(i);
        }

        return reverseString;
    }
}
