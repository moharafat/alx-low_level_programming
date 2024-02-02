#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
