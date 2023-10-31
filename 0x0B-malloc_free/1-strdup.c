#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory, 
 * which contains a copy of the string given as a parameter.
 * @str: the string taht is added by the used
 * Return: NULL if str = 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index;
	int length = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}
	for(index = 0; str[index] ; index++)
	{
		length++;
	}
	duplicate = malloc(sizeof(char) * (length +1));
	
	for(index = 0; str[index] ; index++)
	{
		duplicate[index] = str[index];
	}
	if (duplicate == NULL)//If insufficient memory was available It returns NULL the missing if 
	{						
		return (NULL);
	}
	return (duplicate);
}
