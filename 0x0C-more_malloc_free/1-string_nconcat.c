#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: the 1st string the user will addd
 * @s2: the string we will add to the 1st
 * Return: zero 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l, len1, len2;
	unsigned int i;
	char *s;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) * (len1 + n + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
