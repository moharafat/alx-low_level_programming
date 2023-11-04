#include <stdlib.h>
#include "main.h"
/**
 * *array_range - Write a function that creates an array of integers.
 * @min: the minimum value (inclusive) for the array.
 * @max: the maximum value (inclusive) for the array.
 *Return: the pointer to the newly created array or NULL on failure.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{

    if (new_size == old_size)

        return ptr;


    if (new_size == 0)

    {

        free(ptr);

        return NULL;

    }


    void *new_ptr = malloc(new_size);

    if (new_ptr == NULL)

        return NULL;


    if (ptr != NULL)

    {

        unsigned int copy_size = (old_size < new_size) ? old_size : new_size;

        memcpy(new_ptr, ptr, copy_size);

        free(ptr);

    }


    return new_ptr;

}