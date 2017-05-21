#include <cstring>
#include <map>

/**
 * Finds duplicate characters in a string and counts their occurrences
 * 
 * @param String string 
 * @return std::map<char, int>
 */
std::map<char, int> findDuplicateCharacters(std::string string)
{
    std::map<char, int> duplicateCharacters;
    std::map<char, bool> checkedCharacters;
    int stringLength = string.length();

    for (int i = 0;i < stringLength;i++) {
        bool  check = true;
        if (checkedCharacters[string[i]]) {
            continue;
        }

        bool check = true;
        for (int j = i + 1;j < stringLength;j++) {
            if (string[i] == ' ') {
                break;
            }

            if (string[i] == string[j]) {
                if (check) {
                    duplicateCharacters[string[i]] = 1;
                    check = false;
                }

                duplicateCharacters[string[i]]++;
                checkedCharacters[string[i]] = true;
            }
        }
    }

    return duplicateCharacters;
}