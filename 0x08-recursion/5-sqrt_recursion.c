#include "main.h"
/**
 * helper - Finds the natural square root of an inputted number.
 * @n: The number to find the square root of.
 * @x: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
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
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
return (helper(n, 1));
}
