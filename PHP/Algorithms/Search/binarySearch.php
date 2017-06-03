<?php

/**
 * Implements Binary Search algorithm
 *
 * @param array $array
 * @param mixed $targetElement
 * @return int
 */
function binarySearch($array, $targetElement)
{
    $low = 0;
    $high = count($array) - 1;

    while ($low <= $high) {
        $guess =
            ($low + $high) / 2;

        if ($array[$guess] == $targetElement) {
            return $guess;
        }

        if ($array[$guess] > $targetElement) {
            $high--;
        } else {
            $low++;
        }
    }

    return -1;
}
