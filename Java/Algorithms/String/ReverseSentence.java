/**
 * Class ReverseSentence
 */
public class ReverseSentence {
    /**
     * Reverses the order of words in a sentence and returns that sentence
     *
     * @param sentence a given string sentence that must be reversed
     * @returns String
     */
    public String reverseSentence(String sentence) {
        sentence = sentence.replaceAll("[^a-zA-Z ]", "");

        String[] sentenceWords = sentence.split("\\s+");
        int sentenceWordsCount = sentenceWords.length;

        String reverseSentence = "";

        for (int i = sentenceWordsCount - 1;i > -1;i--) {
            reverseSentence += sentenceWords[i] + " ";
        }

        return reverseSentence;
    }
}
