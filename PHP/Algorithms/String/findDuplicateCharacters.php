<?php

/**
 * Finds duplicate characters in a string and counts their occurrences
 *
 * @param string $string
 * @return array
 * @throws TypeError
 */
function findDuplicateCharacters($string)
{
    if (!is_string($string)) {
        throw new TypeError('String parameter must be of string type');
    }

    $duplicateCharacters = [];
    $checkedCharacters = [];
    $stringLength = strlen($string);

    for ($i = 0; $i < $stringLength; $i++) {
        if ($checkedCharacters[$string[$i]]) {
            continue;
        }

        $check = true;
        for ($j = $i + 1; $j < $stringLength; $j++) {
            if ($string[$i] == ' ') {
                break;
            }

            if ($string[$i] == $string[$j]) {
                if ($check) {
                    $duplicateCharacters[$string[$i]] = 1;
                    $check = false;
                }

                $duplicateCharacters[$string[$i]]++;
                $checkedCharacters[$string[$i]] = true;
            }
        }
    }

    return $duplicateCharacters;
}
