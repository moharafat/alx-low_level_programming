#include "main.h"
/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of the various types.
 *
 * Return: Always 0 (Success)
*/

int print_last_digit(int n)
{	
	int last_digit;
	if (n < 0)
		last_digit = -1 *(n % 10);
	else 
		last_digit = n % 10;

			_putchar (last_digit + 48);
			return (last_digit);
}
