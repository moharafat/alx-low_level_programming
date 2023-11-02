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
        return (NULL);

    ptr = malloc(sizeof(unsigned) * nmemb); // Use malloc directly with your desired size

    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < nmemb; i++)
        ((unsigned *)ptr)[i] = 0;

    return (ptr);
}
