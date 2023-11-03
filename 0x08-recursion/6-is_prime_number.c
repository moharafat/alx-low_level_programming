#include "main.h"
/**
 * is_prime_number - check the code
 *@n: input parameter
 * Return: Always 0.
 */

int helper(int n, int divisor) //function def. must begin with bec.the compiler goes from up to down
{
	if (n == divisor)
	{
	return (1);
	}
	if (n % divisor == 0)
	{
	return (0);
	}
	if (n == 1)
	return (0);

	return (helper(n, divisor + 1)); //Return function 
}

int is_prime_number(int n)

{
	int divisor;
	divisor = 0

	return helper(n, divisor); // function calling 
}
