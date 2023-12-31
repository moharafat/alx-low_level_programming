#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index:index of the node, starting at 0
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	while (ptr != NULL)
	{
		if (i == index)
		{
			return (ptr);
		}
			i++;
			ptr = ptr->next;
	}
	return (NULL);
}
