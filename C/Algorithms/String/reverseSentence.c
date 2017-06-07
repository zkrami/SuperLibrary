#include "split.c"

/**
 * Reverses the order of words in a sentence and returns that sentence
 *
 * @param char *sentence
 * @return char *
 */
char **reverseSentence(char *sentence) 
{
    char *sentenceWords[20] = {NULL};    //sentenceWords = total number of individual words
    static char *reverseSentence[20];    //reverseSentence = max num of individual words
    int sentenceWordsLength = sizeof(sentenceWords) / sizeof(char *);

    split(sentence, ' ', sentenceWords);
    for (int j = sentenceWordsLength - 1, i = 0; j > -1; j--, i++) {
        if (sentenceWords[j]) {
            reverseSentence[i] = strcat(sentenceWords[j], " ");
        }
    }

    return reverseSentence;
} //if breakpoint occurs here then input string has surpassed max words
