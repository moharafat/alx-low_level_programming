#include "main.h"
/**
 * *_strncpy -  function that copies a string
 *@dest: string to be copied upon
 *@src: the string we will copy
 *@n: max characters
 * Return: nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	src[i] = dest[i];
	} 
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
