/**
 * Class LinearSearch
 */
public class LinearSearch {

    /**
     * Implements Linear Search algorithm
     *
     * @param array array
     * @param int searchingElement
     * @returns int
     */
    public int linearSearch(int[] array, int searchingElement) {
        int arrayLength = array.Length;

        for (int i = 0;i < arrayLength;i++) {
            if (array[i] == searchingElement) {
                return i;
            }
        }

        return -1;
    }
}