#include "main.h"
#include <stdio.h>
/**
 *  flip_bits - returns the number of bits you would need to flip
 * @n: The number whose bit value is to be fliped
 * @m:The other number
 * Return:  number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0;
	unsigned long int xor = (n ^ m);

	while (xor > 0)
	{
		counter = counter + (xor & 1);
		xor >>= 1;
	}
	return (counter);
}
