#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *  add_nodeint_end - adds a new node at the END of a listint_t list.
 * @h: refers to the first node (head)
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;

	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node = null)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		temp->next;
	}
	temp->next = new_node;
	*head = new_node;
	return (new_node);
}
