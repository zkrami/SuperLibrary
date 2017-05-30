/**
 * Implements Linear Search algorithm
 *
 * @param array array
 * @param int searchingElement
 * @returns int
 */
int linearSearch(int *array, int searchingElement) {
    int arrayLength = sizeof(array) / array[0];

    for (int i = 0;i < arrayLength;i++) {
        if (array[i] == searchingElement) {
            return i;
        }
    }

    return -1;
}