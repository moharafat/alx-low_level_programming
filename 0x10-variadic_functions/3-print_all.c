#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Write a function that prints anything. 
 * @format: is a list of types of arguments passed to the function 
 * @...: A variable number of numbers to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(ptr, format *);
		if (str = char)
		{
			printf("%s", str);
		}
		if (str = int)
		{
			printf("%s", str);
		}
		if (str = float)
		{
			printf("%f", str);
		}
	}
	va_start(ptr, n);;
	printf("\n");
}
