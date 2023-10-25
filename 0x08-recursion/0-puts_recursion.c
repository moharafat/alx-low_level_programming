#include "main.h"
/**
 * _puts_recursio - prints a string, followed by a new line
 *@s: parameter input
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
 	if (*s == '\0') 
 	{
        _putchar('\n'); // Print a new line when the end of the string is reached
        return;
    }

	_putchar(*s);     // Print the current character
    _puts_recursion(s + 1); // Recursively call the function for the next character
}
