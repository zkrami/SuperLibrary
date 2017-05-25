/**
 * Swaps the characters of a given string
 *
 * @param char *string
 * @param int i
 * @param int j
 */
void swap(char string[], int i, int j)
{
    char temp = string[i];
    string[i] = string[j];
    string[j] = temp;
}