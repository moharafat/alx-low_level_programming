#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string parameter input
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
