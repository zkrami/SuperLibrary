<?php

/**
 * Implements Linear Search algorithm
 *
 * @param array $array
 * @param mixed $searchingElement
 * @return int
 */
function linearSearch(array $array, $searchingElement)
{
    foreach ($array as $key => $value) {
        if ($value == $searchingElement) {
            return $key;
        }
    }

    return -1;
}
