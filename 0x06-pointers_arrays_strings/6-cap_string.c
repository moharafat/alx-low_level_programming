#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *@s: string parameter
 * Return: string s
 */
char *cap_string(char *s)
{
int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;

			if (s[i] = 32 || 9 || 10 || 44 || 59 || 46 || 33 || 63 || 34 || 40 || 41 || 123 || 125)
			s[i] = s[i] - 32;

		}
	}
	return (s);
}
