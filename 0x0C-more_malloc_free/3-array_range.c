#include <stdlib.h>
#include "main.h"
/**
 * *array_range - Write a function that creates an array of integers.
 * @min: the minimum value (inclusive) for the array.
 * @max: the maximum value (inclusive) for the array.
 *Return: the pointer to the newly created array or NULL on failure.
*/
int *array_range(int min, int max)
{
	void *ptr;

	if (min > max)
	return (NULL);

	ptr = malloc();

	if (ptr == NULL)
	{
		return (NULL);
	}

}
