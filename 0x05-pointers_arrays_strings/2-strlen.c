#include <stdio.h>
/**
 * int _strlen - function that returns the length of a string
 *@s: string parameter input
 *Description: This function calculates and returns the length of the input string
 * Return: length of string
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
	length++;
	s++;
}
return (length);
}
