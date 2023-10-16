#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the string pointed to by src
 * Return:  pointer to the dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int l = -1;

	do 	{
		l++;
		dest[l] = src[l];
	} while (src[l] != '\0');

	return (dest);
}
