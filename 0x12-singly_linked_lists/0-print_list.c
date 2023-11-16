#include "lists.h"
#include <stdio.h>
#include <stdlib.h> // Typo fix: change 'stlib.h' to 'stdlib.h'

size_t print_list(const list_t *h)
{
    const list_t *current = h; // Correct variable type and initialize to the head
    
    size_t nodes = 0; // Counter to track the number of nodes printed

    while (current != NULL)
    {
        if (current->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", current->len, current->str);
        }
        
        nodes++; // Increment the node counter
        
        current = current->next; // Move to the next node
    }

    return nodes; // Return the total number of nodes printed
}
