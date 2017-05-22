#include <cstring>

/**
 * Checks if a string is palindrome using iteration
 *
 * @param char *string 
 * @return bool
 */
bool isPalindrom(char *string)
{
    int length = strlen(string);

    for (int i = 0, j = length - 1;i <= length / 2 && j>= length / 2;i++, j--) {
        if (string[i] != string[j]) {
            return false;
        }
    }

    return true;
}