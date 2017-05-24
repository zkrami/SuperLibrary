#include <string.h>
#include <ctype.h>
#include <stdio.h>

typedef struct Map {
    char *key;
    int value;
} map;

/**
 * Counts the number of vowels and consonants in a given string
 *
 * @param char *string
 * @return map *
 */
map * countVowelsAndConsonants(char *string)
{
    int vowelsCount = 0;
    int consonantsCount = 0;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char consonants[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};

    int vowelsLength = sizeof(vowels) / sizeof(vowels[0]);
    int consonantsLength = sizeof(consonants) / sizeof(consonants[0]);
    int stringLength = strlen(string);

    int i = 0;
    while(string[i])
    {
        putchar(tolower(string[i]));
        i++;
    }

    for (int i = 0;i < stringLength;i++) {
        int check = 0;

        for (int j = 0;j < vowelsLength;j++) {
            if (vowels[j] == string[i]) {
                vowelsCount++;
                check = 1;
                break;
            }
        }

        if (check == 1) {
            continue;
        }

        for (int j = 0;j < consonantsLength;j++) {
            if (consonants[j] == string[i]) {
                consonantsCount++;
                break;
            }
        }
    }

    map *result;
    result[0].key = "vowels_count";
    result[0].value = vowelsCount;
    result[1].key = "consonants_count";
    result[1].value = consonantsCount;

    return result;
}