#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 *@s: string parameter input
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		++length;
return (length);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: refers to the first node (head)
 * @str:
 * Return:  address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node= malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str =strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
