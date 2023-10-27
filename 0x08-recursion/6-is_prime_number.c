#include "main.h"
/**
 * is_prime_number - check the code
 *@n: input parameter
 * Return: Always 0.
 */
int n;
int x;

int helper (n , x) //function def. must begin with bec.the compiler goes from up to down
{
	if (n == x)
	{
	return (1);
	}
	if (n % x == 0)
	{
	return (0);
	}
	if (n == 1)
	return (0);

	return helper (n, x + 1); //Return function 
}

int is_prime_number(int n, int divisor)

{
return helper (n , x); // function calling 
}
