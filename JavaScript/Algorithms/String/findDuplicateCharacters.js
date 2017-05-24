/**
 * Finds duplicate characters in a string and counts their occurrences
 *
 * @param {string} string
 * @returns {Object}
 */
function findDuplicateCharacters(string)
{
    if (typeof string != 'string') {
        throw new TypeError('Parameter is not of string type');
    }

    try {
        var duplicateCharacters = {};
        var checkedCharacters = {};
        var stringLength = string.length;

        for (var i = 0; i < stringLength; i++) {
            if (checkedCharacters[string[i]]) {
                continue;
            }

            var check = true;
            for (var j = i + 1; j < stringLength; j++) {
                if (string.charAt(i) == ' ') {
                    break;
                }

                if (string.charAt(i) == string.charAt(j)) {
                    if (check) {
                        duplicateCharacters[string[i]] = 1;
                        check = false;
                    }

                    duplicateCharacters[string[i]]++;
                    checkedCharacters[string[i]] = true;
                }
            }
        }

        return duplicateCharacters;

    } catch (err) {
        console.error(err.message);
    }
}