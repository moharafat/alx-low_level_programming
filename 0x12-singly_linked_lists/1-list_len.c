#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: refers to the first node (head)
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
/*we will iterate inside each node counting the elements*/
/*the pointer h will get us into the next node using h->next */
	size_t elements = 0;
	int i;

	for (i = 0; h != NULL ; i++)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
