/**
 * Retrieve the character at the specific index in a string
 *
 * @param {string} string
 * @param {int}index
 * @returns {string}
 */
function charAt(string, index) {
    try {
        return string.charAt(index);
    } catch (err) {
        console.log(err.message);
    }
}