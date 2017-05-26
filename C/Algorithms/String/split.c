#include <string.h>

/**
 * Splits string into array
 *
 * @param char *string
 * @param char delimiter
 * @param char *words[]
 * @param int size
 */
void split(char *string, char delimiter, char *words[])
{
    int i = 0, j = 0, k = 0;
    while (string[i] != '\0') {
        if (string[i] == delimiter) {
            char *subString;

            for (int a = j, b = 0;a < i;a++, b++) {
                subString[b] = string[a];
            }

            words[k] = subString;
            k++;
            j = i + 1;
        }

        i++;
    }

    int stringLength = strlen(stringLength);
    char *subString;

    for (int a = j, b = 0;a < stringLength;a++, b++) {
        subString[b] = string[a];
    }

    words[k] = subString;

    return words;
}