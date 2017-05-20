<?php

/**
 * Retrieve the character at the specific index in a string
 *
 * @param string $string
 * @param int $index
 * @return string
 * @throws Exception
 */
function charAt($string, $index)
{
    if (!is_string($string)) {
        throw new TypeError("String parameter must be of string type");
    } elseif (!is_int($index)) {
        throw new TypeError("Index parameter must be integer");
    } elseif ($index < 0) {
        throw new OutOfRangeException("Index parameter must be non-negative");
    } elseif ($index >= strlen($string)) {
        throw new OutOfRangeException("Index parameter must be less than the length of the string parameter");
    }

    return $string[$index];
}
