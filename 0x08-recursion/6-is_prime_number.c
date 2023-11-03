#include "main.h"
#include <math.h> // Include math library for sqrt function

/**
 * helper - Helper function to check if a number is prime
 * @n: The number to check for primality
 * @divisor: The current divisor to check
 * Return: 1 if prime, 0 if not
 */
int helper(int n, int divisor)
{
    if (n <= 1)
        return 0; // 0 and 1 are not prime

    if (divisor > sqrt(n))
        return 1; // All divisors checked, it's prime

    if (n % divisor == 0)
        return 0; // Found a divisor, it's not prime

    return helper(n, divisor + 1); // Check the next divisor
}

/**
 * is_prime_number - Check if a number is prime
 * @n: The number to check for primality
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
    return helper(n, 2); // Start checking from divisor 2 (the smallest prime)
}
