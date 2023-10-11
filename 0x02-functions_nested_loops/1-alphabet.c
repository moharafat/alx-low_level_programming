#include "main.h"

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of the various types.
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
	_putchar(x);
	}

	_putchar('\n');
}
