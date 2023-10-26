#include "main.h"
/**
 * is_prime_number - check the code
 *@n: input parameter
 * Return: Always 0.
 */
int is_prime_number(int n)
{
    if (divisor == 1)
    {
        return 1; // If we've checked all divisors up to 1, it's prime
    }
    if (n % divisor == 0)
    {
        return 0; // If n is divisible by any divisor, it's not prime
    }
    return is_divisible(n, divisor - 1); // Try the next divisor
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number, 0 otherwise
 * @n: The number to check for primality
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n < 2)
    {
        return 0; // 0 and 1 are not prime
    }
    return is_divisible(n, n - 1); // Start checking divisibility from n-1