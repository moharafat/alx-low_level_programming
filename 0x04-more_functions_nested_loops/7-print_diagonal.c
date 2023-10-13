#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *@n: the only integer added
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int L, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= n; l++)
		{
			for (space = 1; space < l; space++)
			{	_putchar(' ');
			_putchar(92);
			}
			_putchar('\n');
		}

	}
}
