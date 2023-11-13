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

	va_start(ptr, format);

	while (*format != '\0')
	{
		char type = *format;
		
		switch (type) 
		{
			case 'c':
			printf("%c", va_arg(ptr, char));
			case 'i':
			printf("%d", va_arg(ptr, int));
			case 'f':
			printf("%f", va_arg(ptr, double));
			case 's':
			printf("%s", va_arg(ptr, char));
			break;
      		default:
			break;
		}
		    format++;
	}
	va_end(ptr);
	printf("\n");
}
