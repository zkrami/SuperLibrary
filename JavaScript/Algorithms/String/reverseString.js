/**
 * Reverses the given string
 *
 * @param {string} string
 * @returns {string}
 */
function reverseString(string) {
    var reverseString = '';
    var length = string.length;

    for (var i = length - 1;i > -1;i--) {
        reverseString += string.charAt(i);
    }

    return reverseString;
}