<?php

/**
 * Implements Bubble sort
 *
 * @param array $array
 * @param int $ordering
 * @return int
 */
function bubbleSort(array &$array, int $ordering)
{
    $length = count($array);

    $swapped = true;
    while ($swapped) {
        $swapped = false;
        for ($i = 1; $i < $length; $i++) {
            if ($ordering == 0) {
                if ($array[$i - 1] > $array[$i]) {
                    $temp = $array[$i - 1];
                    $array[$i - 1] = $array[$i];
                    $array[$i] = $temp;
                    $swapped = true;
                }
            } elseif ($ordering == 1) {
                if ($array[$i - 1] < $array[$i]) {
                    $temp = $array[$i - 1];
                    $array[$i - 1] = $array[$i];
                    $array[$i] = $temp;
                    $swapped = true;
                }
            } else {
                return -1;
            }
        }
    }
}
