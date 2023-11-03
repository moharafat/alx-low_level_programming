#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: input number parameter which we will get the square root
 * Return: Always 0
 */ 
int x = 1;
 
int helper(int n, int x)
{
	if (x < n)
	return (-1);
	
	if (x == n)
	return (-1);

	if (x * x == n)
	return (x);
	
	return helper (n, x + 1);
}

int _sqrt_recursion(int n)
{
return helper(n , x);
}
