#include <cstring>

/**
 * Reverses the given string
 * @param char *string
 * @return int
 */
char * reverseString(char *string)
{
    int length = std::strlen(string);
    char *reverseString;

    for (int i = length - 1, j = 0;i > -1;i--, j++) {
        reverseString[j] = string[i];
    }

    return reverseString;
}