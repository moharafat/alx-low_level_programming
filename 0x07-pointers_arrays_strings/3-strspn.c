#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: 
 * @accept: 
 *
 * Return: Always number of bytes in the initial segmen
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, temp, count;
	temp = 0;
	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{count ++;
			temp = 0;
			}
			
			else
			{
			temp = 1;

			if (temp == 1)
			break
			}
			
		}
	}
}
