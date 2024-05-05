#include "search_algos.h"

/**
* binary_search -searches in an array of integers using Linear search algorithm
* Return: the first index where value is located
* @array: pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: the value to search for
*/
int binary_search(int *array, size_t size, int value)
{
	size_t  high, low, middle;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	high = size - 1;
	low = 0;
	while (low <= high)
	{
		middle = (high + low) / 2;
		printf("Searching in array: ");
		print_array(array, low, high);
		if (value < array[middle])
		{
			high = middle - 1;
		}
		else if (value > array[middle])
		{
			low = middle + 1;
			/*middle = middle * 1.5;*/
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}

/**
 * print_array - prints elements of an array within a range
 * @array: pointer to the first element of the array
 * @start: starting index of the range
 * @end: ending index of the range
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	for (i = start; i <= end; ++i)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}
