#include "hash_tables.h"
/**
 * hash_table_set - function adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_item;

	current_item = ht->array[index];
	while (current_item != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(current_item->value);
			current_item->value = strdup(value);
			if (current_item->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		current_item = current_item->next;
	}
	current_item = malloc(sizeof(hash_node_t));
	if (current_item == NULL)
	{
		return (0);
	}
	current_item->key = strdup(key);
	current_item->value = strdup(value);
	if (current_item->key == NULL || current_item->value == NULL)
	{
		free(current_item->value);
		free(current_item->key);
		return (0);
	}
	current_item->next = ht->array[index];
	ht->array[index] = current_item;
	return (1);
}
