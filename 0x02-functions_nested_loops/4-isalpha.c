#include "main.h"
/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of the various types.
 *
 * Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
