#include "lists.h"
/**
 * sum_dlistint -the sum of all the data (n) of a dlistint_t linked list.
 * @head:pointer to the head of the doubly linked list
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *head_t;

	while (head)
	{
		sum = sum + head_t->n;
		head_t = head_t->next;
	}
	return (sum);
}
