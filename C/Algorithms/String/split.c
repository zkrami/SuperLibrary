#include <string.h>
#include <stdlib.h>

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
    int i = -1, j = 0, k = 0;
    do {
	    i++;
	    if (string[i] == delimiter || string[i] == '\0') {
	        char *subString = malloc(sizeof(char) * 20); //subString = max length of individual words
	        for (int a = j, b = 0; a <= i; a++, b++) {    
		        if (a == i) {
		        subString[b] = '\0';
		        }
		        else {
		            subString[b] = string[a];
		        }
            }
            words[k] = subString;
            k++;
            j = i + 1;			
        }
	} while (string[i] != '\0');
}