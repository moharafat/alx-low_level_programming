#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
int pop_listint(listint_t **head)
{
	int ret;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
	listint_t *temp = *head;
	ret = (*head)->n;
	(*head) = (*head)->next;
	free(temp);
	}
	return (ret);
}
