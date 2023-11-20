#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *temp
	int ret;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
	temp = *head;
	ret = (*head)->n;
	(*head) = (*head)->next;
	free(temp);
	temp = NULL;
	}
	return (ret);
}
