#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *  print_listint -  prints all the elements of a listint_t list.
 * @h: refers to the first node (head)
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	while (h != NULL)
	{

		{
			printf("%d\n", h->n);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
