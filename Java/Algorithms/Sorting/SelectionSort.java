/**
 * Class SelectionSort
 */
public class SelectionSort {

    public static final int ASC_ORDERING = 0;
    public static final int DESC_ORDERING = 1;

    /**
     * Implements Selection sort
     *
     * @param array a given array
     * @param ordering a given integer specifying the ordering of the array
     * @return int|array
     */
    public int[] selectionSort(int[] array, int ordering)
    {
        int length = array.length;

        for (int i = 0;i < length;i++) {
            int min = i;
            for (int j = i + 1;j < length;j++) {
                if (ordering == 0) {
                    if (array[min] > array[j]) {
                        min = j;
                    }
                } else if (ordering == 1) {
                    if (array[min] < array[j]) {
                        min = j;
                    }
                } else {
                    return -1;
                }
            }

            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }

        return array;
    }
}
