#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array and initializes it with zeros
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: a pointer to the allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned int total_size;
	char *filler;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);
	filler = ptr
	for (i = 0; i < total_size; i++)
		filler[i] = '\0';

	return (ptr);
}
