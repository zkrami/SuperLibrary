using System;

/**
 * Class ReverseString
 */
public class ReverseString
{
    /**
    * Checks if a string is palindrome using iteration
    *
    * @param String str
    * @return 
    */
    public bool reverseString(string str)
    {
        string reverseString = "";
        int length = str.Length;

        for (int i = length - 1;i > -1;i--) {
            reverseString += str[i]; 
        }

        return reverseString;
    }
}