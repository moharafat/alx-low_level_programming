#include "main.h"
/**
 * is_prime_number - check the code
 *@n: input parameter
 * Return: Always 0.
 */

int helper(int n, int divisor)
{
	if (n == divisor / 2)
	{
	return (1);
	}
	if (n % divisor == 0)
	{
	return (0);
	}
	if (n == 1)
	return (0);

	return (helper(n, divisor + 1));
}

int is_prime_number(int n)

{
	int divisor;
	divisor = 0;

	return helper(n, divisor);
}
