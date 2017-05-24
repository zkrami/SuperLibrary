<?php

/**
 * Counts the number of vowels and consonants in a given string
 *
 * @param string $string
 * @return array
 */
function countVowelsAndConsonants($string)
{
    $vowelsCount = 0;
    $consonantsCount = 0;
    $vowels = ['a', 'e', 'i', 'o', 'u'];
    $consonants = ['b',	'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p',	'q', 'r', 's', 't',	'v', 'w', 'x', 'y', 'z'];

    $vowelsLength = count($vowels);
    $consonantsLength = count($consonants);
    $stringLength = strlen($string);

    $string = strtolower($string);

    for ($i = 0;$i < $stringLength;$i++) {
        $check = false;

        for ($j = 0;$j < $vowelsLength;$j++) {
            if ($vowels[$j] == $string[$i]) {
                $vowelsCount++;
                $check = true;
                break;
            }
        }

        if ($check) {
            continue;
        }

        for ($j = 0;$j < $consonantsLength;$j++) {
            if ($consonants[$j] == $string[$i]) {
                $consonantsCount++;
                break;
            }
        }
    }

    return [
        'vowels_count' => $vowelsCount,
        'consonants_count' => $consonantsCount
    ];
}
