#include "main.h"
#include <stdio.h>
/**
 * *_strcat - check the codefunction that concatenates two strings
 *@dest: 1st input
 *@src: second input
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	for (j = 0; src[j] ; j++)
	{
	dest[i + j] = src[j];
	}
	return(dest);
}
