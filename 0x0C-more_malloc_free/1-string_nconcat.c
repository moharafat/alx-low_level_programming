#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: t
 * @s2: t
 * Return: zero 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l, len1, len2, i;
	char *s;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i <= n]; i++)
	{
		len2++;
	}
	l = len1 +len2 + 1;
	s = malloc(l * sinzeof(char));
	for (i = 0; s1[i] != 0; i++)
	{
		s[i] = s1[1];
	}
	for (i = 0; s2[i <= n]; i++)
	{
		s[len1 + i] = s2[i]
	}
}
