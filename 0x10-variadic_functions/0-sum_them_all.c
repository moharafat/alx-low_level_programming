#include "variadic_functions.h"
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		va_list ptr;
		sum = sum + va_arg(ptr, int);
		va_end(ptr);
	}
	return (sum);
}
