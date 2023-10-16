#include "main.h"
/**
 * print_array -  function that prints n elements of an array of integers
 *@a: elements parameter input
 *@n: strings parameter input
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
