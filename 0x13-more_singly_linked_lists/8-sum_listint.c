#include "lists.h"
/**
 * sum_listint -sum of all the data (n) oflistint_t linked list
 * @head: A pointer to the head of the listint_t list.
 * Return: the sum of all the data, Otherwise 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
