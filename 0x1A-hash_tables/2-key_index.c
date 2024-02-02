#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @size: the size of the array
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
