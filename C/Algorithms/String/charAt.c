#include <stdio.h>
#include <string.h>

/**
 * Retrieve the character at the specific index in a string
 *
 * @param string string
 * @param int index
 * @return char
 */
char charAt(char *string, int index)
{
    char charAt = ' ';

    if (index < 0) {
        printf("Index parameter must be non-negative");
    } else if (index > strlen(string) - 1) {
        printf("Index parameter must be less than the length of the string parameter");
    } else {
        charAt = string[index];
    }

    return charAt;
}