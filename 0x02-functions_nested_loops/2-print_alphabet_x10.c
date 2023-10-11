#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int x, l;

	for (l = 0; l < 10; l++)
	{
		for (x = 97; x <= 122; x++)

		_putchar(x);
		_putchar('\n');
	}
}
