#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_item;
	unsigned long int i;
	unsigned long int size;
	unsigned long int index;
	const char *key;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for	(i = 0; i < ht->size; i++)
	{
		current_item =  ht->array[i];
		if (current_item == NULL)
		{
			return;
		}
		while (current_item != NULL)
		{
			printf("'%s': '%s'", current_item->key, current_item->value);
			current_item = current_item->next;
			if (current_item != NULL)
				printf(", ");
		}


	}
}
