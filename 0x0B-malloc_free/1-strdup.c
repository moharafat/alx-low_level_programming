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
	char *p;
	unsigned int size; // I presume that that is the index

	p = malloc(sizeof(char) * size);
	duplicate = _strdup(str);
	if (str == NULL) //Returns NULL if str = NULL
	{
		return (NULL);
	}
	if (duplicate > size)//If insufficient memory was available It returns NULL 
	{						//the missing if 
		return (NULL);
	}
	if (size == 0 )
	{
		return (0);
	}
	

	return (duplicate); //succsses
}
