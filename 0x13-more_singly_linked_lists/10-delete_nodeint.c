#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - iserts a new node at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: is the index of the list where the new node should be deleted
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t  *previous = *head;
	listint_t  *current = *head;

	if (*(head) = NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while (index != 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
	 if (current == NULL)
		return (-1);
	}
	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
