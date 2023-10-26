#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively
 * @n: The number for which to find the square root
 * @guess: The current guess for the square root
 * Return: The square root if found, -1 otherwise
 */
int find_sqrt(int n, int guess)
{
    if (guess * guess == n)
    {
        return guess; // If guess squared is equal to n, we found the square root
    }
    if (guess * guess > n)
    {
        return -1; // If guess squared is greater than n, n doesn't have a natural square root
    }
    return find_sqrt(n, guess + 1); // Try the next guess
}
