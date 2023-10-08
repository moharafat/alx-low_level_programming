#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
int main(void)
{
int a = 48;

while (a <= 102)
{
	putchar(a);

	if (a == 57)

		a += 39;
	a++;

}

	putchar('\n');
return (0);
}
