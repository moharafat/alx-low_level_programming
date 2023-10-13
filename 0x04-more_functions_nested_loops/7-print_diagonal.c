#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int L, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (L = 1; L <= n; L++)
		{
			for (space = 1; space <= L; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}	

	}
}
