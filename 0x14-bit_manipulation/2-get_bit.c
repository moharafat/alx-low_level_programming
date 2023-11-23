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
	if (index >= n)
	{
		return (-1);
	}
		get_bit(n >> index);
		_putchar((n & 1) + '0');
}
