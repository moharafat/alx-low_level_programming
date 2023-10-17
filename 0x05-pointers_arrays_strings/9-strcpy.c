#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return:  pointer to the dest.
 */

char *_strcpy(char *dest, const char *src)
{
	int a = -1;

	do {
	a++;
	dest[a] = src[a];
	} while (src[a] != '\0');
	return (dest);
}
