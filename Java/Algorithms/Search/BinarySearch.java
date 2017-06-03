/**
 * Class BinarySearch
 */
public class BinarySearch {

    /**
     * Implements Binary Search algorithm
     *
     * @param array a given array
     * @param targetElement
     * @return int
     */
    function binarySearch(int[] array, int targetElement)
    {
        int low = 0;
        int high = array.length - 1;

        while (low <= high) {
            int guess = (low + high) / 2;

            if (array[guess] == targetElement) {
                return guess;
            }

            if (array[guess] > targetElement) {
                high--;
            } else {
                low++;
            }
        }

        return -1;
    }
}
