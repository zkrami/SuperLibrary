<?php

/**
 * Reverses the order of words in a sentence and returns that sentence
 *
 * @param $sentence
 * @return string
 */
function reverseSentence($sentence)
{
    $sentence = str_replace(['.', ',', ':', ';', '?', '-', '&', '(', ')'], '', $sentence);

    $sentenceWords = explode(' ', $sentence);
    $sentenceWordsCount = count($sentenceWords);

    $reverseSentence = '';

    for ($i = $sentenceWordsCount - 1;$i > -1;$i--) {
        $reverseSentence .= $sentenceWords[$i] . ' ';
    }

    return $reverseSentence;
}
