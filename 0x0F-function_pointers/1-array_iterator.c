#include "function_pointers.h"
/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: is the size of the array
 * @action:is a pointer to the function you need to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

}
