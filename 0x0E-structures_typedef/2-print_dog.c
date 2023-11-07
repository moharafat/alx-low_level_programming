#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        return; // Do nothing if d is NULL
    }

    printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
    printf("Age: %f\n", (d->age >= 0) ? d->age : 0.0);
    printf("Breed: %s\n", (d->breed != NULL) ? d->breed : "(nil)");
}
