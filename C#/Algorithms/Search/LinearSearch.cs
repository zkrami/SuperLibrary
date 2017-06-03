/**
 * Class LinearSearch
 */
public class LinearSearch {

    /**
     * Implements Linear Search algorithm
     *
     * @param array array
     * @param int targetElement
     * @returns int
     */
    public int linearSearch(int[] array, int targetElement) {
        int arrayLength = array.Length;

        for (int i = 0;i < arrayLength;i++) {
            if (array[i] == targetElement) {
                return i;
            }
        }

        return -1;
    }
}