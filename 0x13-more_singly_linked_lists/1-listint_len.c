#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *  listint_len - returns the number of elements in a linked listint_t list
 * @h: refers to the first node (head)
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return counter;
}
