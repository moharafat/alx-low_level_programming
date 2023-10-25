#include "main.h"
/**
 * _puts_recursio - prints a string, followed by a new line
 *@s: parameter input
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		str++;
	}
	_putchar('\n');
}
