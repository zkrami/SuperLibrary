#include <string.h>
#include <map>
#include <algorithm>

/**
 * Counts the number of vowels and consonants in a given string
 *
 * @param string str
 * @return map<std::string, int>
 */
std::map<std::string, int> countVowelsAndConsonants(std::string str)
{
    int vowelsCount = 0;
    int consonantsCount = 0;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char consonants[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};

    int vowelsLength = sizeof(vowels) / sizeof(vowels[0]);
    int consonantsLength = sizeof(consonants) / sizeof(consonants[0]);
    int stringLength = str.length();

    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    for (int i = 0;i < stringLength;i++) {
        bool check = false;

        for (int j = 0;j < vowelsLength;j++) {
            if (vowels[j] == str.at(i)) {
                vowelsCount++;
                check = true;
                break;
            }
        }

        if (check) {
            continue;
        }

        for (int j = 0;j < consonantsLength;j++) {
            if (consonants[j] == str.at(i)) {
                consonantsCount++;
                break;
            }
        }
    }

    std::map<std::string, int> result;
    result["vowels_count"] = vowelsCount;
    result["consonants_count"] = consonantsCount;

    return result;
}