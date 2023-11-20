#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
    if (head == NULL || *head == NULL) {
        // Handle cases where the list or head is NULL
        return -1; // Return an error code (-1 in this case)
    } else {
        listint_t *temp = *head; // Store the current head
        int removed_data = temp->n; // Store the data of the removed node

        *head = (*head)->next; // Move the head pointer to the next node

        free(temp); // Free the memory of the removed node
        temp = NULL;

        return removed_data; // Return the removed integer data
    }
}
