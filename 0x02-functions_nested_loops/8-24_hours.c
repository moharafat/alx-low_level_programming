#include "main.h"

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of the various types.
 *
 * Return: Always 0 (Success)
*/

void jack_bauer(void)
{
	int min, hr;
	for (hr =0 ; hr <=23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
