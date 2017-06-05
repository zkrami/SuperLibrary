/**
 * Class LinearSearch
 */
public class LinearSearch {

    /**
     * Implements Linear Search algorithm
     *
     * @param array a given array in which the wanted element is searched
     * @param targetElement the element to be searched for
     * @returns int
     */
    public int linearSearch(int[] array, int targetElement) {
        int arrayLength = array.length;

        for (int i = 0;i < arrayLength;i++) {
            if (array[i] == targetElement) {
                return i;
            }
        }

        return -1;
    }
}
