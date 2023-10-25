#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 *@n: given number parameter
 * Return: Always 0 except wehn n is less than 1 return -1
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return 1;
		
	if (n < 0)
	return -1;

	return n * factorial(n - 1);
}
