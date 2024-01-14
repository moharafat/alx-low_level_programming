#include "lists.h"
/**
 * delete_dnodeint_at_index - delets a new node at a given position.
 * @h: A pointer to the address of the head of the dlistint_t list.
 * @idx: index of the node, starting from 0
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL || index >= dlistint_len(*head))
		return (-1);

	current = *head;
	for (i = 0; i < index; i++)
		current = current->next;

	if (current == *head)
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);
	return (1);
}
