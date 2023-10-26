#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 *@s: the input string parameter
 * Return: the length of the string
 */

int _strlen_recursion(char *s);
{
	int length = 0;
	if (*s == '\0')
	{
	return (0);
	}
	else 
	{
	length += 1 + _strlen_recursion (*s + 1);
	return (length);
	}
}
