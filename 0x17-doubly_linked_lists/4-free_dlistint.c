#include "lists.h"
/**
 * free_dlistint -frees a dlistint_t list.
 * @head: A pointer to the address of the head of the dlistint_t list.
 * Return:0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currnet_node;
	dlistint_t *next_node;

	currnet_node = head;
	while (currnet_node != NULL)
	{
		next_node = currnet_node->next;
		free(currnet_node);
		currnet_node = next_node;
	}
	head = NULL;
}
