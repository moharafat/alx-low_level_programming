#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number for which to find the square root
 * Return: The square root if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1; // Return -1 for negative input
    }
    return find_sqrt(n, 0); // Start with the first guess of 0
}
