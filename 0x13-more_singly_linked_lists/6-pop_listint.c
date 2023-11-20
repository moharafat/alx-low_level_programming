#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
    if (head == NULL || *head == NULL) 
	{
        return -1; 
    } 
	else {
        listint_t *temp = *head;
        int removed_data = temp->n;

        *head = (*head)->next;

        free(temp);
        temp = NULL;

        return removed_data;
    }
}
