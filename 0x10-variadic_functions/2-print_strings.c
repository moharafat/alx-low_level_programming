#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator:  is the string to be printed between strings
 * @n: The number of strings passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: always zero.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	if ( ptr == NULL)
		{
		printf("nil");
		}
	for(i = 0; i < n; i++)
	{
	
		if (separator != NULL)
		{
		printf("%s", separator);	
		}
		printf("%c", va_arg(ptr, int));
	}
	va_end(ptr);
	printf("\n");
}
