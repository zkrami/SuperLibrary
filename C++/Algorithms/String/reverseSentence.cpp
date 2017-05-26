#include <vector>
#include <string>
#include <algorithm>
#include "split.cpp"

/**
 * Reverses the order of words in a sentence and returns that sentence
 *
 * @param string sentence
 * @return string
 */
std::string reverseSentence(std::string sentence)
{
    std::string removedPunctuationSentence;

    std::remove_copy_if(sentence.begin(), sentence.end(),
                        std::back_inserter(removedPunctuationSentence),
                        std::ptr_fun<int, int>(&std::ispunct));

    std::vector<std::string> sentenceWords = split(removedPunctuationSentence, ' ');

    std::string reverseSentence = "";
    int sentenceWordsLength = sentenceWords.size();

    for (int j = sentenceWordsLength - 1;j > -1;j--) {
        reverseSentence += sentenceWords.at(j) + " ";
    }

    return reverseSentence;
}