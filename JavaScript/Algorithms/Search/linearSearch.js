/**
 * Implements Linear Search algorithm
 *
 * @param array
 * @param searchingElement
 * @returns {*}
 */
function linearSearch(array, searchingElement) {
    var arrayLength = array.length;

    for (var i = 0;i < arrayLength;i++) {
        if (array[i] == searchingElement) {
            return i;
        }
    }

    return 'Not found';
}