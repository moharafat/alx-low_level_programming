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
	hash_node_t *new_item;

	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
	{
		return (0);
	}
	new_item->key = strdup(key);
	new_item->value = strdup(value);
	if (new_item->key == NULL || new_item->value == NULL)
	{
		free(new_item->value);
		free(new_item->key);
		return (0);
	}
	new_item->next = NULL;
	if (current_item == NULL)
	{
		ht->array[index] = new_item;
	}
	if (current_item != NULL)
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
		new_item->next = current_item;
		ht->array[index] = new_item;
		return (1);
	}
	return (1);
}
