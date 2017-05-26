#include <vector>
#include <string>

/**
 * Splits string into vector
 *
 * @param string str
 * @return vector<std::string>
 */
std::vector<std::string> split(std::string str, char delimiter)
{
    std::vector<std::string> words;

    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] == delimiter) {
            words.push_back(str.substr(j, i - j));
            j = i + 1;
        }

        i++;
    }

    words.push_back(str.substr(j));

    return words;
}