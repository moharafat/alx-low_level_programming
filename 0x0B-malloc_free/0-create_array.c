#include <stdlib.h>
#include "main.h"
/**
 * *create_array - function that creates an array of chars, and initializes it with a specific char
 * @c: t
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == 0)
		return (0);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
