#include "main.h"
/**
 *_strcmp - function that compares two strings
 *@s1: what we will compare
 *@s2: what we will compare to
 * Return: the comparison
 */

int _strcmp(char *s1, char *s2)
{
int i;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0';i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
