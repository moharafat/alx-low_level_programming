#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
	return;
	}
	length = _print_rev_recursion(s - 1)

    _putchar(*s);
}
