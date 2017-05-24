/**
 * Counts the number of vowels and consonants in a given string
 *
 * @param {string} string
 * @returns {{vowels_count: number, consonants_count: number}}
 */
function countVowelsAndConsonants(string)
{
    var vowelsCount = 0;
    var consonantsCount = 0;
    var vowels = ['a', 'e', 'i', 'o', 'u'];
    var consonants = ['b',	'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p',	'q', 'r', 's', 't',	'v', 'w', 'x', 'y', 'z'];

    var vowelsLength = vowels.length;
    var consonantsLength = consonants.length;
    var stringLength = string.length;

    string = string.toLowerCase();

    for (var i = 0;i < stringLength;i++) {
        var check = false;

        for (var j = 0;j < vowelsLength;j++) {
            if (vowels[j] == string.charAt(i)) {
                vowelsCount++;
                check = true;
                break;
            }
        }

        if (check) {
            continue;
        }

        for (var j = 0;j < consonantsLength;j++) {
            if (consonants[j] == string.charAt(i)) {
                consonantsCount++;
                break;
            }
        }
    }

    return {
        vowels_count: vowelsCount,
        consonants_count: consonantsCount
    };
}