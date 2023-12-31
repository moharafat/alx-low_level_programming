#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 *@x: given number parameter
 *@y: given number that is the square
 * Return: Always 0 except wehn y is less than 0 return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else if (y == 1)
	{
	return (x);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
