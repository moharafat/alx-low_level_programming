#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *  add_nodeint - adds a new node at the beginning of a listint_t list.
 * @h: refers to the first node (head)
 * Return: the number of  address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		if (new_node->n = NULL)
		{
			free (new_node);
			return (NULL);
		}
		new_node->next = **head;
		**head = new_node;
	}
	return (new_node);
}
