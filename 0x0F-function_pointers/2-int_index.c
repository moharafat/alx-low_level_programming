#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: the integer to print
 * @size:  number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
		int i;
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			int result = cmp(array[i]);
			if (result != 0)
			{
				return (i);
			}

		}
		return (-1);
}
