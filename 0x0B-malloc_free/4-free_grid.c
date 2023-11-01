#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: the string that is added by the used
 * @s2: the 2nd string to be added to the 1st
 * Return: NULL if str = 0
 */
void free_grid(int **grid, int height)
{
    int i;
    for(i = 0; i < height; i++)
    {
        free (grid[i]);
        free(grid);
    }
}
