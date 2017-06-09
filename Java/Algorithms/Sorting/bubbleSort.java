/**
 * Class BubbleSort
 */
public class BubbleSort {

    /**
     * Implements Bubble sort
     *
     * @param array a given array
     * @param ordering a given integer specifying the ordering of the array
     * @return int|array
     */
    public int[] bubbleSort(int[] array, int ordering)
    {
        int length = array.length;

        boolean swapped = true;
        while (swapped) {
            swapped = false;
            for (int i = 1; i < length; i++) {
                if (ordering == 0) {
                    if (array[i - 1] > array[i]) {
                        int temp = array[i - 1];
                        array[i - 1] = array[i];
                        array[i] = temp;
                        swapped = true;
                    }
                } else if (ordering == 1) {
                    if (array[i - 1] < array[i]) {
                        int temp = array[i - 1];
                        array[i - 1] = array[i];
                        array[i] = temp;
                        swapped = true;
                    }
                } else {
                    return -1;
                }
            }
        }

        return array;
    }
}
