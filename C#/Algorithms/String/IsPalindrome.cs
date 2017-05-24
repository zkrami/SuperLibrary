using System;

/**
 * Class IsPalindrome
 */
public class IsPalindrome
{
    /**
    * Checks if a string is palindrome using iteration
    *
    * @param String str
    * @return bool
    */
    public bool isPalindromeIteration(string str)
    {
        int length = str.Length;

        for (int i = 0, j = length - 1;i <= length / 2 && j >= length / 2;i++, j--) {
            if (str[i] != str[j]) {
                return false;
            }
        }

        return true;
    }
}