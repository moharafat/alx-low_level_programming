#include "main.h"
#include <stdio.h>
/**
 *  set_bit -sets the value of a bit to 1 at a given index
 * @n: The number whose bit value is to be returned
 * @index:The index of the bit to be returned
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if (*n >> index & 1 == 0)
	{
		*n | (1 << index);
		return (1);
	}
	if (*n >> index & 1 == 1)
	{
		return (1);
	}
}
