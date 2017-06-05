const ASC_ORDERING = 0;
const DESC_ORDERING = 1;

/**
 * Implements Selection sort
 *
 * @param array
 * @param {int} ordering
 * @return int|array
 */
function selectionSort(array, ordering)
{
    var length = array.length;

    for (var i = 0;i < length;i++) {
        var min = i;
        for (var j = i + 1;j < length;j++) {
            if (ordering === 0) {
                if (array[min] > array[j]) {
                    min = j;
                }
            } else if (ordering === 1) {
                if (array[min] < array[j]) {
                    min = j;
                }
            } else {
                return -1;
            }
        }

        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }

    return array;
}