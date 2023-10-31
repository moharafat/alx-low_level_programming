#include <stdio.h>
#include <stdlib.h>
#include "main.h" // Include your header file to provide the function prototype

char *create_array(unsigned int size, char c)
{
    if (size == 0) {
        return NULL;
    }

    char *array = (char *)malloc(size * sizeof(char));

    if (array == NULL) {
        return NULL; // Memory allocation failed
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}