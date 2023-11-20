#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
int pop_listint(listint_t **head)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
	listint_t *temp = *head;
	head = head->next;
	free(temp);
	temp = NULL;
	}
	return (head);
}
