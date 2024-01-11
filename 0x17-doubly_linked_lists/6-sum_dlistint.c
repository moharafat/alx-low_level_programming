#include "lists.h"
/**
 * sum_dlistint -the sum of all the data (n) of a dlistint_t linked list.
 * @head:pointer to the head of the doubly linked list
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
