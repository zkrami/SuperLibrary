#include <string.h>
#include "isPalindrome.c"

 /**
 * Finds the longest palindrome in a given string
 *
 * @param char *string
 * @return char *
 */
char * findLongestPalindrome(char *string)
{
    if (isPalindromeIteration(string)) {
        return string;
    }

    int stringLength = strlen(string);
    char  *longestPalindrome = "";
    int longestPalindromeLength = 1;

    for (int start = 0;start < stringLength - 1;start++) {
        for (int end = start + 2;end < stringLength;end++) {
            char *subString = "";

            for (int i = start, j = 0;i <= end;i++, j++) {
                subString[j] = string[i];
            }

            if (isPalindromeIteration(subString)) {
                int tempSubStringLength = strlen(subString);
                if (tempSubStringLength > longestPalindromeLength) {
                    longestPalindrome = subString;
                    longestPalindromeLength = tempSubStringLength;
                }
            }
        }
    }

    if (longestPalindromeLength == 1) {
        char *result = "";
        result[0] = string[0];

        return result;
    }

    return longestPalindrome;
}