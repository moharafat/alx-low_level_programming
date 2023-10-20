#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 *
 * Return: Always 0.
 */
char *string_toupper(char *)
{
int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (i = 0; s[i] >= 97 && s[i] <= 122; i++)
		s[i] = s[i - 32];
	}
}
