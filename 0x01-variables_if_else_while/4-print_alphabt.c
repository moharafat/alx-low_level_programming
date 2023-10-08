#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/

int main(void)
{
int a = 97;

while (a >= 97 && a <= 122)
	if (a != 101 && a != 113)

	{
	putchar(a);
	a++;
	}

	putchar('\n');

return (0);
}
