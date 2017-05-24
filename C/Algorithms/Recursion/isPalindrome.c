#include <string.h>

/**
 * Checks if a string is palindrome using recursion
 *
 * @param char *string 
 * @return int
 */
int isPalindrome(char *string)
{
    int length = strlen(string);

    if (length < 2) {
        return 1;
    }

    if (string[0] != string[length - 1]) {
        return 0;
    }

    char subString[length - 2];

    for (int i = 1;i < length - 1;i++) {
        subString[i - 1] = string[i];
    }

    return isPalindrome(subString);
}