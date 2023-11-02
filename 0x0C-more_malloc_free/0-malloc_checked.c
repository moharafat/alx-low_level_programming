#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: the unsigned int that is added by the user
 * Return: a pointer to the allocated memory
 * If malloc fails, it terminates the program with status 98
 */
void *malloc_checked(unsigned int b)
{
    void *p;

    p = malloc(b);

    if (p == NULL)
    {
        exit(98);
    }

    return p; // Return the allocated memory pointer
}
