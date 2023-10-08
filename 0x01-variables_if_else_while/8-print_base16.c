#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
int main()
{

for (int i = 0; i < 16; i++) {
		// Print digits 0-9
		putchar(i < 10 ? '0' + i : 'a' + i - 10);
}


	putchar('\n');
return (0);
}
