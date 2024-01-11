#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head:pointer to the head of the doubly linked list
 * @index: index of the node, starting from 0
 * Return:  pointer to the nth node, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;

	current_node = head;
	while (current_node != NULL)
	{
		if (current_node == index)
		{
			return (current_node);
		}
		current_node = current_node->next;
	}
	return (NULL);
}
