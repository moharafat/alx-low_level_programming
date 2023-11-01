#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2D array of integers.
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 * Return: Pointer to the 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
    if (width <= 0 || height <= 0) // Check for invalid width or height
    {
        return NULL;
    }

    int **grid = malloc(height * sizeof(int *));
    
    if (grid == NULL)
    {
        return NULL; // Memory allocation failed
    }

    for (int i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            // Memory allocation for row i failed, so free previously allocated rows
            for (int j = 0; j < i; j++)
            {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }

        // Initialize elements to 0
        for (int j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }

    return grid;
}