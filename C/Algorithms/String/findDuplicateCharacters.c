#include <string.h>
#include <stdlib.h>

typedef struct Map {
    char key;
    int value;
} map;

/**
 * Finds duplicate characters in a string and counts their occurrences
 *
 * @param string string
 * @return map*
 */
map *findDuplicateCharacters(char *string)
{
    int length = strlen(string);
    int index = 0;

    map *duplicateCharacters;
    map *checkedCharacters;
    duplicateCharacters = malloc(length * sizeof(map));
    checkedCharacters = malloc(length * sizeof(map));

    for (int i = 0;i < length;i++) {
        int check = 0;

        for (int j = 0;j < length;j++) {
            if (checkedCharacters[j].key == string[i] && checkedCharacters[j].value == 1) {
                check = 1;
                break;
            }
        }

        if (check == 1) {
            continue;
        }

        for (int j = i + 1;j < length;j++) {
            if (string[i] == ' ') {
                break;
            }

            if (string[i] == string[j]) {
                if (check == 0) {
                    duplicateCharacters[index].value = 1;
                    duplicateCharacters[index].key = string[i];
                    check = 1;
                }

                duplicateCharacters[index].value++;
                checkedCharacters[index].key = duplicateCharacters[i].key;
                checkedCharacters[index].value = 1;
            }
        }

        if (check == 1) index++;
    }

    return duplicateCharacters;
}