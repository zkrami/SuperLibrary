/**
 * Implements Selection sort
 *
 * @param int *array
 * @param int ordering
 * @return int|array
 */
void bubbleSort(int *array, int ordering)
{
    int length = sizeof(array) / sizeof(array[0]);

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
}