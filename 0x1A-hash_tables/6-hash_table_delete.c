#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 * Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_item, *next_item;

	if (ht->size == 0 || ht == NULL || ht->array == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current_item =  ht->array[i];
		while (current_item != NULL)
		{
			next_item = current_item->next;
			free(current_item->key);
			free(current_item->value);
			current_item = current_item->next;
			current_item = next_item;

		}
	}
	free(ht->array);
	free(ht);
}
