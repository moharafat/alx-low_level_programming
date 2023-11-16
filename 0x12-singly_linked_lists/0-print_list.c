#include 'lists.h'
#include <stdio.h>
#include <stdlib.h>

/**
 *  print_list -  prints all the elements of a list_t list.
 * @h: 
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t current = *h;

	while (current != NULL)
	{
		printf("[%d] %s", current->len, current-> str)
		currnet = current->next;	
	}
	while (current == NULL)
	{
		printf("[0] (nil)")
	}
}
