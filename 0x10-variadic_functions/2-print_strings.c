#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
	const char *str = va_arg(ptr, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
			else
			{
			printf("%s", str);
			}
		if (separator != NULL && i != n - 1)
		{
		printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
