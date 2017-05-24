import java.util.HashMap;
import java.util.Map;

/**
 * Class VowelsAndConsonantsCount
 */
public class VowelsAndConsonantsCount {
    /**
     * Counts the number of vowels and consonants in a given string
     *
     * @param str a given string whom vowels and consonants must be counted
     * @return Map<String, Integer>
     */
    public Map<String, Integer> countVowelsAndConsonants(String str) {
        int vowelsCount = 0;
        int consonantsCount = 0;
        char[] vowels = {'a', 'e', 'i', 'o', 'u'};
        char[] consonants = {'b',	'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p',	'q', 'r', 's', 't',	'v', 'w', 'x', 'y', 'z'};

        int vowelsLength = vowels.length;
        int consonantsLength = consonants.length;
        int stringLength = str.length();

        str = str.toLowerCase();

        for (int i = 0;i < stringLength;i++) {
            boolean check = false;

            for (int j = 0;j < vowelsLength;j++) {
                if (vowels[j] == str.charAt(i)) {
                    vowelsCount++;
                    check = true;
                    break;
                }
            }

            if (check) {
                continue;
            }

            for (int j = 0;j < consonantsLength;j++) {
                if (consonants[j] == str.charAt(i)) {
                    consonantsCount++;
                    break;
                }
            }
        }

        Map<String, Integer> result = new HashMap<>();
        result.put("vowels_count", vowelsCount);
        result.put("consonants_count", consonantsCount);

        return result;
    }
}
