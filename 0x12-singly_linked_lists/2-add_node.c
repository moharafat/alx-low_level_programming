#include "lists.h"
#include <string.h>
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
	new_node->str =strup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
