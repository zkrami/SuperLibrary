/**
 * Implements Binary Search algorithm
 *
 * @param array array
 * @param int targetElement
 * @return int
 */
int binarySearch(int *array, int targetElement)
{
    int low = 0;
    int high = array.Length - 1;

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