const int ASC_ORDERING = 0;
const int DESC_ORDERING = 1;

/**
 * Implements Selection sort
 *
 * @param int *array
 * @param int ordering
 * @return int|array
 */
void selectionSort(int *array, int ordering)
{
    int length = sizeof(array) / sizeof(array[0]);

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
}