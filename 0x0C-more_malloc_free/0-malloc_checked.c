#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: the unsigned int that is added by the user
 * Return: 98 when malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(int) * b);
	if (p == NULL)
	{
		exit (98);
	}
}
