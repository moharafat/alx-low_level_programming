#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously 
 * created by your alloc_grid function.
 * @ **grid: the int that is added by the user
 * @height: the 2nd that is added by the user
 * Return:width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, k;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] ==  NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(arr[k]);
			}
		}
	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			arr[i][k] = 0;
		}
	}
	return (arr);
}
