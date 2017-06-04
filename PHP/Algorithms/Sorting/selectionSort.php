<?php

const ASC_ORDERING = 0;
const DESC_ORDERING = 1;

/**
 * Implements Selection sort
 *
 * @param array $array
 * @param int $ordering
 * @return int
 */
function selectionSort(array &$array, int $ordering)
{
    $length = count($array);

    for ($i = 0;$i < $length;$i++) {
        $min = $i;
        for ($j = $i + 1;$j < $length;$j++) {
            if ($ordering === 0) {
                if ($array[$min] > $array[$j]) {
                    $min = $j;
                }
            } elseif ($ordering === 1) {
                if ($array[$min] < $array[$j]) {
                    $min = $j;
                }
            } else {
                return -1;
            }
        }

        $temp = $array[$i];
        $array[$i] = $array[$min];
        $array[$min] = $temp;
    }
}
