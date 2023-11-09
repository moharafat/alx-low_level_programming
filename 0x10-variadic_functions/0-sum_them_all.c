#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: The number of paramters passed to the function.
* @...: A variable number of paramters to calculate the sum of.
 *
 * Return: the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ptr, int);
	}
		va_end(ptr);

	return (sum);
}
