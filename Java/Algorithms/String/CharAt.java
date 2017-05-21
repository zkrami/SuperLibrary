/**
 * Class CharAt
 */
public class CharAt {

    /**
     * Retrieve the character at the specific index in a string
     *
     * @param String string
     * @param int index
     * @return char
     */
    public char charAt(String str, int index) {
        char charAt = ' ';

        try {
            charAt = str.charAt(index);
        } catch (IndexOutOfBoundsException e) {
            System.err.print("Index out of bounds exception: " + e.getMessage());
        }

        return charAt;
    }
}
