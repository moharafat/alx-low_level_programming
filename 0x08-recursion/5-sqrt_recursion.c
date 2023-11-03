#include "main.h"

/**
 * sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number to find the square root of.
 * @x: The current value for checking the square root.
 * Return: The square root of n or -1 if it's not a natural square root.
 */
int sqrt_helper(int n, int x)
{
    if (x * x == n)
        return x;
    
    if (x * x > n)
        return -1;

    if (x > n / 2)  // You don't need to check beyond half of n
        return -1;

    return sqrt_helper(n, x + 1);
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

    return sqrt_helper(n, 0);
}
