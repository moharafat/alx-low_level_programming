#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
int main(void)
{
int n = 0;

	while (n >= 0 && n <= 10)
	{
	putchar(n +'0');
	// Putchar is expecting ASCII codes
	n++;
	}



return (0);
}
