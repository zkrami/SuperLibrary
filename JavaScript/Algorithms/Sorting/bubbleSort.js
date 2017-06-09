/**
 * Implements Bubble sort
 *
 * @param array
 * @param {int} ordering
 * @return int
 */
function bubbleSort(array, ordering)
{
    var length = array.length;

    var swapped = true;
    while (swapped) {
        swapped = false;
        for (var i = 1; i < length; i++) {
            if (ordering == 0) {
                if (array[i - 1] > array[i]) {
                    var temp = array[i - 1];
                    array[i - 1] = array[i];
                    array[i] = temp;
                    swapped = true;
                }
            } else if (ordering == 1) {
                if (array[i - 1] < array[i]) {
                    var temp = array[i - 1];
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