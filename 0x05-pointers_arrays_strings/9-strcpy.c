#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
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
