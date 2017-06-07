/**
 * Implements Linear Search algorithm
 *
 * @param array array
 * @param int targetElement
 * @returns int
 */
int linearSearch(int *array, int targetElement) {
    int arrayLength = sizeof(array) / array[0];

    for (int i = 0;i < arrayLength;i++) {
        if (array[i] == targetElement) {
            return i;
        }
    }

    return -1;
}