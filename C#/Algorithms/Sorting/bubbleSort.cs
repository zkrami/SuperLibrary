/**
 * Class BubbleSort
 */
public class BubbleSort {

    /**
     * Implements Bubble sort
     *
     * @param array array
     * @param int ordering
     * @return int|array
     */
    public int[] bubbleSort(int[] array, int ordering)
    {
        int length = array.Length;

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
