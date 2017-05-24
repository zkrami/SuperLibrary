#include <iostream>

/**
 * Retrieve the character at the specific index in a string
 *
 * @param string str
 * @param int index
 * @return char
 */
char charAt(std::string str, int index)
{
    try {
        return str.at(index);
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range error: " << e.what();
    }
}