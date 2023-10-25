#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 *@s: the input string parameter
 * Return: Always 0
 */
int _strlen_recursion(char *s);
{
    // Base case: if the current character is the null terminator, return 0
    if (s == '\0')
    {
        return 0;
    }
    
    // Recursively call _strlen_recursion with the next character in the string
    return 1 + _strlen_recursion(s + 1);
}
