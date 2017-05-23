#include <string.h>

/**
 * Reverses the given string
 *
 * @param char *string
 * @return string
 */
char * reverseString(char *string)
{
    int length = strlen(string);
    char *reverseString;

    for (int i = length - 1, j = 0;i > -1;i--, j++) {
        reverseString[j] = string[i];
    }

    return reverseString;
}