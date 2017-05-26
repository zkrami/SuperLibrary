#include "split.c"

/**
 * Reverses the order of words in a sentence and returns that sentence
 *
 * @param char *sentence
 * @return char *
 */
char * reverseSentence(char *sentence)
{
    char **sentenceWords;
    split(sentence, ' ', sentenceWords);

    char *reverseSentence = "";
    int sentenceWordsLength = sizeof(sentenceWords) / sizeof(sentenceWords[0]);

    for (int j = sentenceWordsLength - 1;j > -1;j--) {
        strcat(reverseSentence, strcat(sentenceWords[j], ' '));
    }

    return reverseSentence;
}