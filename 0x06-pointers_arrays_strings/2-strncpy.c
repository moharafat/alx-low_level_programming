#include "main.h"
/**
 * *_strncpy -  function that copies a string
 *@dest: first input
 *@src: second input
 *@n: third input
 * Return: nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	} 
	return (dest);
}
