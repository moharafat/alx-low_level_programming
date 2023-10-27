#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: input number parameter which we will get the square root
 * Return: Always 0
 */ 
int x;
x = 1;
 
int helper(n , x)//function defintion which  could be  int helper(n , 1)
{
	if (x < n)
	return (-1);
	if (x == n) // WE REACHED THE END. IT IS A PRIME #
	return (-1);
	if (x * x == n) // WE HAVE FOUND X 
	return (x);
	return helper (n, x + 1);//Return function 
}


int _sqrt_recursion(int n)
{
return helper(n , x) //calling function
}
