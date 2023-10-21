#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *@s: string parameter
 * Return: string s
 */
char *cap_string(char *s)
{
int i;

	if (s[0] >= 97 && s[i] <= 122)
	{
		s[0] = s[0] - 32;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || 
		s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || 
		s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || 
		s[i] == '}' && (s[i] >= 97 && s[i] <= 122))
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
