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

    if (nmemb == 0 || size == 0)
        return NULL;

    // Calculate the total size of the memory block
    size_t total_size = nmemb * size;

    // Use calloc to allocate and initialize memory
    ptr = calloc(nmemb, size);

    if (ptr == NULL)
        return NULL;

    // No need for a separate loop to initialize with zeros

    return ptr;
}
