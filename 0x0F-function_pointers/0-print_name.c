#include "function_pointers.h"
/**
 * print_name - Prints a name.
 * @name: The name taht will be printed.
 * @f: A pointer to a function that will print a name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name || f == NULL)
	return (NULL);
	if (name && f)
	f(name);
}
