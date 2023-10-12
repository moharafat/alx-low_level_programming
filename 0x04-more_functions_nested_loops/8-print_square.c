#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_square(int size)
{	
	int r, c;

	if (size <= 0)
		_putchar('\n');
	
	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
			_putchar(35);
			_putchar('\n');
	}	
}