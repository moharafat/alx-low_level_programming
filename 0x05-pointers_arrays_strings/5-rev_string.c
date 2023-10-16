#include "main.h"
/**
 * rev_string -  function that reverses a string
 *@s: pointer to the string to be printed
 * Return: Always 0.
 */

void rev_string(char *s)
{

int length = 0;

	while (s[length])
	length++;
	while (length--)
	{
		_putchar(s[length]);
	}

}