#include "main.h"
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

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
	dest[i + j] = src[j];
	}
	return (dest);
}
