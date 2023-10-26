#include "main.h"
/**
 * is_prime_number - check the code
 *@n: input parameter
 * Return: Always 0.
 */
int is_prime_number(int n, int divisor)
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
