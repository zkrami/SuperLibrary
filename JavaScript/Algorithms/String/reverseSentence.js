/**
 * Reverses the order of words in a sentence and returns that sentence
 *
 * @param {string} sentence
 * @returns {string}
 */
function reverseSentence(sentence) {
    sentence = sentence.replace(/[.,\/#!$%\^&\*;:{}=\-_`~()?]/g,"");
    sentence = sentence.replace(/\s{2,}/g," ");

    var sentenceWords = sentence.split(' ');
    var sentenceWordsCount = sentenceWords.length;

    var reverseSentence = '';

    for (var i = sentenceWordsCount - 1;i > -1;i--) {
        reverseSentence += sentenceWords[i] + ' ';
    }

    return reverseSentence;
}