using System;
using System.Collections.Generic;

/**
 * Class VowelsAndConsonantsCount
 */
public class VowelsAndConsonantsCount {
    /**
     * Counts the number of vowels and consonants in a given string
     *
     * @param string str
     * @return Dictionary<string, int>
     */
    public Dictionary<string, int> countVowelsAndConsonants(string str) {
        int vowelsCount = 0;
        int consonantsCount = 0;
        char[] vowels = {'a', 'e', 'i', 'o', 'u'};
        char[] consonants = {'b',	'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p',	'q', 'r', 's', 't',	'v', 'w', 'x', 'y', 'z'};

        int vowelsLength = vowels.Length;
        int consonantsLength = consonants.Length;
        int stringLength = str.Length;

        str = str.ToLower();

        for (int i = 0;i < stringLength;i++) {
            bool check = false;

            for (int j = 0;j < vowelsLength;j++) {
                if (vowels[j] == str[i]) {
                    vowelsCount++;
                    check = true;
                    break;
                }
            }

            if (check) {
                continue;
            }

            for (int j = 0;j < consonantsLength;j++) {
                if (consonants[j] == str[i]) {
                    consonantsCount++;
                    break;
                }
            }
        }

        Dictionary<string, int> result = new Dictionary<string, int>();
        result.Add("vowels_count", vowelsCount);
        result.Add("consonants_count", consonantsCount);

        return result;
    }
}