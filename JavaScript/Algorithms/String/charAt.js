/**
 * Retrieve the character at the specific index in a string
 *
 * @param {string} string
 * @param {int}index
 * @returns {string}
 */
function charAt(string, index) {
    if (typeof string != 'string') {
        throw new TypeError('Parameter is not of string type');
    } else if (index !== parseInt(index)) {
        throw new TypeError('Parameter is not of int type');
    } else if (index < 0 || index > string.length - 1) {
        throw new RangeError('Index is out of range');
    }

    try {
        return string[index];
    } catch (err) {
        console.error(err.message);
    }
}