using System;

/**
 * Class IsPalindrome
 */
public class IsPalindrome
{
    /**
    * Checks if a string is palindrome using recursion
    *
    * @param String str
    * @return bool
    */
    public bool isPalindromeRecursion(string str)
    {
        if (str.Length < 2) {
            return true;
        }

        if (str[0] != str[str.Length - 1]) {
            return false;
        }

        return isPalindromeRecursion(str.Substring(1, str.Length - 2));
    }
}