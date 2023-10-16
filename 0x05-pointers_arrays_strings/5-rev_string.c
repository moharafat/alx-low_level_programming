#include "main.h"
/**
 * rev_string -  function that reverses a string
 *@s: pointer to the string to be printed
 * Return: Always 0.
 */

void print_rev(char *s) {
	int length = 0;

	while (s[length] != '\0') {
		length++;
	}

	for (int i = length - 1; i >= 0; i--) {
		_putchar(s[i]);
	}

	_putchar('\n');
}
