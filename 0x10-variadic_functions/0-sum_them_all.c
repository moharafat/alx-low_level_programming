#include "variadic_functions.h"
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ptr;
	for (i = 0; i < n; i++)
	
	{
		va_start(ptr, n);
		sum = sum + va_arg(ptr, int);
		va_end(ptr);
	}
	return (sum);
}
