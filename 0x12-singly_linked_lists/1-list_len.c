#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: refers to the first node (head)
 * Return: number of elements 
 */
size_t list_len(const list_t *h)
{
    size_t elements = 0;
    int i;

    for (i = 0; h != NULL ;i++)
    {
        elements++;
        h = h->next;
    }
    return (elements);
}