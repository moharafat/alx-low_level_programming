#include "main.h"

/**
 * helper - Helper function to calculate the square root recursively.
 * @n: The number to find the square root of.
 * @x: The current value for checking the square root.
 * Return: The square root of n or -1 if it's not a natural square root.
 */
int helper(int n, int x)
{
    if (x < 0) // x cannot be negative, so if x < 0, it's not a natural square root
        return (-1);

    if (x * x == n)
        return x;

    if (x * x > n)
        return (-1);

    return helper(n, x + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number for which we want to find the square root.
 * Return: The square root of n or -1 if it's not a natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0) // Check if n is a negative number
        return -1;

    return helper(n, 0);
}
