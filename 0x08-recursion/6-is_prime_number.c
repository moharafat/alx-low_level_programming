#include "main.h"

/**
 * helper - Checks if a number is divisible by any divisor from 2 to n-1.
 * @n: The number to be checked.
 * @divisor: The current divisor to test.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int helper(int n, int divisor)
{
    if (n == 1)
        return (0);

    if (divisor == n)
        return (1);

    if (n % divisor == 0)
        return (0);

    return (helper(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);

    return (helper(n, 2));
}
