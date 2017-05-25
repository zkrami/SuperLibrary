import java.util.HashMap;
import java.util.Map;

/**
 * Class FindDuplicateCharacters
 */
public class FindDuplicateCharacters {
    /**
     * Finds duplicate characters in a string and counts their occurrences
     *
     * @param String str
     * @return Map<Character, Integer>
     */
    public static Map<Character, Integer> findDuplicateCharacters(String str)
    {
        Map<Character, Integer> duplicateCharacters  = new HashMap<Character, Integer>();
        Map<Character, Boolean> checkedCharacters = new HashMap<Character, Boolean>();
        int stringLength = str.length();

        for (int i = 0;i < stringLength;i++) {
            checkedCharacters.put(str.charAt(i), false);
        }

        for (int i = 0;i < stringLength;i++) {
            if (checkedCharacters.get(str.charAt(i))) {
                    continue;
            }


            boolean check = true;
            for (int j = i + 1;j < stringLength;j++) {
                if (str.charAt(i) == ' ') {
                    break;
                }

                if (str.charAt(i) == str.charAt(j)) {
                    if (check) {
                        duplicateCharacters.put(str.charAt(i), 1);
                        check = false;
                    }

                    duplicateCharacters.put(str.charAt(i), duplicateCharacters.get(str.charAt(i)) + 1);
                    checkedCharacters.put(str.charAt(i), true);
                }
            }
        }

        return duplicateCharacters;
    }
}