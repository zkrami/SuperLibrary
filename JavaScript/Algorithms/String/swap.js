/**
 * Swaps the characters of a given string
 *
 * @param {string} string
 * @param {int} i
 * @param {int} j
 */
function swap(string, i, j) {
    var stringFirstPart = string.substring(0, i);
    var stringSecondPart = string.substring(i + 1, j);
    var stringThirdPart = string.substring(j + 1);

    return string.substring(0, i) +
           string.charAt(j) +
           string.substring(i + 1, j) +
           string.charAt(i) +
           string.substring(j + 1);
}