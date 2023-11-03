#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: input number parameter which we will get the square root
 * Return: Always 0
 */

int helper(int n, int x)
{
	if (x * x == n)
	return (x);

	else if (x * x < n)
	return (helper(n, x + 1));

	else
		return (-1);
}

int _sqrt_recursion(int n)
{
return (helper(n, 1));
}
