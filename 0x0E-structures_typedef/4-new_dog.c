#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp;
	char* cpname, cpowner;
	int i, lenname, lenowner;

	for (i = 0, lenname = 0; name[i] != '\0'; i++)
		lenname++;
	for (i = 0, lenowner = 0; owner[i] != '\0'; i++)
		lenowner++;
	cpname = malloc(sizeof(char) * (lenname + 1))
		if cpname == NULL
		return (NULL);
		_strcp(cpname, name);
	cpowner = malloc (sizeof(char) * lenowner + 1)
		if cpowner == NULL
		{
			free(cpname);
			return (null);
		}
		_strcp(cpowner, owner);
	tmp = malloc (sizeof (dog_t));
	if (tmp == NULL)
	{
		free(cpname);
		free(cpowner);
		return (null);
	}
	tmp->name = cpname;
	tmp ->age = age;
	tmp->owner = cpowner;
	return (tmp);
}
