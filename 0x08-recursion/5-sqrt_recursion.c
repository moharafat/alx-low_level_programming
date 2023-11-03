#include "main.h"

/**
 * helper - Helper function to calculate the square root recursively
 * @n: The number for which to calculate the square root
 * @x: The current guess for the square root
 * Return: The square root if found, or -1 if not found
 */
int helper(int n, int x)
{
    if (x * x == n)
        return x; // Found the square root

    if (x * x > n)
        return -1; // Square root doesn't exist as an integer

    return helper(n, x + 1); // Try the next value of x
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root
 * Return: The square root if found, or -1 if not found
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1; // Square root of a negative number is not defined

    return helper(n, 0); // Start with x = 0
}
