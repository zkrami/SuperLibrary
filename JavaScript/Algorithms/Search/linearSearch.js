/**
 * Implements Linear Search algorithm
 *
 * @param array
 * @param targetElement
 * @returns int
 */
function linearSearch(array, targetElement) {
    var arrayLength = array.length;

    for (var i = 0;i < arrayLength;i++) {
        if (array[i] == targetElement) {
            return i;
        }
    }

    return -1;
}