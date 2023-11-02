#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and checks for success
 * @b: the amount of memory to allocate
 * Return: a pointer to the allocated memory
 * If malloc fails, the program terminates with status 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        exit(98);
    }

    return ptr;
}
