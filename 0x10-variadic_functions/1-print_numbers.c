#include "variadic_functions.h"
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf(va_arg(ptr, int));
	}
	va_end(ptr);

}
