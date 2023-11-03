#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the minimum value (inclusive) for the array.
 * @max: the maximum value (inclusive) for the array.
 * Return: a pointer to the newly created array or NULL on failure.
 */
int *array_range(int min, int max)
{
    int *ptr;
    int size, i;

    if (min > max)
        return (NULL);

    size = (max - min + 1);
    ptr = (int *)malloc(size * sizeof(int));

    if (ptr == NULL)
    {
        return (NULL); // Memory allocation failed
    }

    // Initialize the array with values from min to max
    for (i = 0; i < size; i++)
    {
        ptr[i] = min + i;
    }

    return (ptr);
}
