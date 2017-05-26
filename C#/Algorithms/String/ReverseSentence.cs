/**
 * Class ReverseSentence
 */
public class ReverseSentence {
    /**
     * Reverses the order of words in a sentence and returns that sentence
     *
     * @param string sentence
     * @returns string
     */
    public string reverseSentence(string sentence) {
        string[] sentenceWords = sentence.Split(' ');
        int sentenceWordsCount = sentenceWords.Length;

        string reverseSentence = "";

        for (int i = sentenceWordsCount - 1;i > -1;i--) {
            reverseSentence += sentenceWords[i] + " ";
        }

        return reverseSentence;
    }
}