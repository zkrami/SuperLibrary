/**
 * Checks if a given number is perfect square
 *
 * @param {int} number
 * @return bool
 */
function isPerfectSquare(number) {
    var i = 0;
    while (i * i < number) {
        i++;
    }

    return i * i == number;
}