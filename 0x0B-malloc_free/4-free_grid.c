#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Write a function that concatenates two strings.
 * @**grid: the string that is added by the used
 * @height: the 2nd string to be added to the 1st
 * Return: always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free (grid[i]);

		free(grid);
	}
}
