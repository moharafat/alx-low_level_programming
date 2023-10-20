#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *@a: 1st string
 *@n: 2nd string
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i, temp;

	for (i = 0; a[i] != '\0'; i++)
	{
	}
	for(i = 0; i < n / 2; i++)
	{
	temp =a[i];
	a[i] = a[n - 1];
	a[n - 1] = temp;
	}
}
