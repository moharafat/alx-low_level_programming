#include "main.h"
#include <stdio.h>
/**
 *  get_bit -returns the value of a bit at a given index
 * @n: The number whose bit value is to be returned
 * @index:The index of the bit to be returned
 * Return:returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else if ((n >> index & 1) == 1)
	{
	return (1);
	}
	else if ((n >> index & 0)== 0)
	{
	return (0);
	}
}
