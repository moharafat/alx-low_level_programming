#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that returns the length of a string
 *@s: string parameter input
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;
	for (length = 0; *s != '\0'; s++)
		++length;
return (length);
}
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: string to be added to the list_t list.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    char *new_data;

    new_data = strdup(str);
    if (new_data == NULL)
    {
        return (NULL);
    }

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        free(new_data);
        return (NULL);
    }

    new_node->str = new_data;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    return (new_node);
}
