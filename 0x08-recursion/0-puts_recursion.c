#include "main.h"
/**
 * _puts_recursio - prints a string, followed by a new line
 *@s: parameter input
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{

	_puts_recursion(s + 1);
    _putchar('\n');

}
