using System;

/**
 * Class FindDuplicateCharacters
 */
public class FindDuplicateCharacters
{
    /**
     * Finds duplicate characters in a string and counts their occurrences
     *
     * @param string str
     * @return Dictionary<char, int>
     */
    public Dictionary<char, int> findDuplicateCharacters(string str)
    {
        var duplicatedCharacters = str.GroupBy(character => character)
                                      .Where(character => character.Count() > 1)
                                      .Select(character => new { charKey = character.Key, charCount = character.Count()})
                                      .ToArray();
        var duplicatedCharactersDictionary = new Dictionary<char, int>();
        int length = duplicatedCharacters.Length;

        for (int i = 0;i < length;i++) {
            duplicatedCharactersDictionary.Add(duplicatedCharacters[i].charKey, duplicatedCharacters[i].charCount);
        }

        return duplicatedCharactersDictionary;
    }
}