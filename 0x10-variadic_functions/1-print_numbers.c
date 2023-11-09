#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

 /**
  *
  * print_numbers - Prints numbers, followed by a new line.
  * @separator:  is the string to be printed between numbers
  * @n: The number of paramters passed to the function.
  * @...: A variable number of paramters to calculate the sum of.
  * Return: always zero.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
		{
		printf("%s", separator);
		}
		printf("%d", va_arg(ptr, int));
	}
	va_end(ptr);
	printf("\n");
}
