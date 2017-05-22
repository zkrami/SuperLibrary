#include <string.h>

/**
 * Checks if a string is palindrome using iteration
 *
 * @param char *string
 * @return int
 */
int isPalindrome(char *string)
{
    int length = strlen(string);

    for (int i = 0, j = length - 1;i <= length / 2 && j >= length / 2;i++, j--) {
        if (string[i] != string[j]) {
            return 0;
        }
    }

    return 1;
}