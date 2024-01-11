#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: A pointer to the address of the head of the dlistint_t list.
 * @idx: index of the node, starting from 0
 * @n: value added inside the node
 * Return:  pointer to the nth node, or NULL if node does not exist
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *new_node;

	ptr = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = ptr;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	new_node->next = ptr->next;
	ptr->next = new_node;
	new_node->prev = ptr;
	return (new_node);
}
