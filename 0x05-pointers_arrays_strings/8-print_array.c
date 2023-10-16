#include <stdio.h>#
include "main.h"
/**
 * print_array -  function that prints n elements of an array of integers
 *@a: elements parameter input
 *@n: strings parameter input
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		if (i != (n - 1))
				printf("%d, ", a[i]);
			else
				prinf("%d", a[i]);
	}
	printf("\n");
}
