#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: is the index of the list where the new node should be added
 * @n: integer inside  new node 
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = ptr;
		*head = new_node;
		return (new_node);
	}
	
	while (node < (idx - 1)) {
  if (copy == NULL || copy->next == NULL) {
    return NULL;
  }

  copy = copy->next;
  node++;
}

	new_node->next = ptr->next;
	ptr->next = new_node;
	return (new_node);
}
