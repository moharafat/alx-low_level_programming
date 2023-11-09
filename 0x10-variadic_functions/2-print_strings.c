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

	
	for(i = 0; i < n; i++)
	{
		const char *str = va_arg(ptr, char *);

		if ( str == NULL)
		{{
			printf("nil");
		}
		else
		{
		printf("%s", str);
		}}
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);	
		}
	}
	va_end(ptr);
	printf("\n");
}
