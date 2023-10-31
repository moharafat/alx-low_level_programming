#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: the string that is added by the used
 * @s2: the 2nd string to be added to the 1st 
 * Return: NULL if str = 0
 */
char *str_concat(char *s1, char *s2)
{
	int length;
	int array_index;
	char *array;

	if (s1 == NULL)
	{
		return ('\0');
	}
	if (s2 == NULL)
	{
		return ('\0');
	}

for (index = 0; s1[index] || s2[index]; index++)
		length++;
		
	array = malloc(sizeof(char) * (length));
	if (array == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[carray_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[array_index++] = s2[index];

	return (array)
}
