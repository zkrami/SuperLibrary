/**
 * Finds the longest palindrome in a given string
 *
 * @param string string
 * @returns {string}
 */
function findLongestPalindrome(string) {
    if (isPalindrome(string)) {
        return string;
    }

    var stringLength = string.length;
    var longestPalindrome = '';
    var longestPalindromeLength = 1;

    for (var start = 0;start < stringLength - 1;start++) {
        for (var subStringLength = 2;subStringLength < stringLength - start + 1;subStringLength++) {
            var subString = string.substr(start, subStringLength);
            if (isPalindromeIteration(subString)) {
                var tempSubStringLength = subString.length;
                if (tempSubStringLength > longestPalindromeLength) {
                    longestPalindrome = subString;
                    longestPalindromeLength = tempSubStringLength;
                }
            }
        }
    }

    if (longestPalindromeLength === 1) {
        return string.charAt(0);
    }

    return longestPalindrome;
}