using System;

/**
 * Class CharAt
 */
public class CharAt
{
    /**
    * Retrieve the character at the specific index in a string
    *
    * @param String str
    * @param int index
    * @return char
    */
    public static char charAt(string str, int index)
    {
        char charAt = ' ';

        try {
            charAt = str[index];
        } catch (ArgumentOutOfRangeException e) {
            Console.WriteLine(e.Message);
        }

        return charAt;
    }
}