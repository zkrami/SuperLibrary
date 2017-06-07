/**
 * Implements Binary Search algorithm
 *
 * @param array
 * @param targetElement
 * @return int
 */
function binarySearch(array, targetElement)
{
    var low = 0;
    var high = array.length - 1;

    while (low <= high) {
        var guess = Math.floor((low + high) / 2);

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