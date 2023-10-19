#include "main.h"
#include <stdio.h>
/**
 * *_strncat - check the codefunction that concatenates two strings
 *@dest: 1st input
 *@src: second input
 *@n: third input
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] < n; j++)
	{
	dest[i + j] = src[j];
	}
	return (dest);
}
