#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: the unsigned int that is added by the user
 * Return: zero 
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * b);
	if (p == NULL)
	{
		return (98);
	}
}
