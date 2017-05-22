/**
 * Checks if a string is palindrome using iteration
 *
 * @param {string} string
 * @returns {boolean}
 */
function isPalindromeIteration(string) {
    var length = string.length;

    for (var i = 0, j = length - 1;i <= length / 2 && j >= length / 2;i++, j--) {
        if (string.charAt(i) != string.charAt(j)) {
            return false;
        }
    }

    return true;
}