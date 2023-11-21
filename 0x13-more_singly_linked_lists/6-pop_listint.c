#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * Return: If the linked list is empty - 0.
 *         if not  The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
	temp = *head;
	ret = (*head)->n;
	(*head) = (*head)->next;
	free(temp);
	temp = NULL;
	}
	return (ret);
}
