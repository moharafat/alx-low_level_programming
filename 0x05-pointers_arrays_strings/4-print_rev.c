#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse
 *@s: pointer to the string to be printed
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length])
	length++;
	while (length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
