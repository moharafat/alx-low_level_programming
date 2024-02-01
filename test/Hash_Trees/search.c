char* ht_search(HashTable* table, char* key)
{
    int index = hash_function(key);
    Ht_item item = table->items[index];
    if (item != NULL)
    {
        if (strcmp (items->key, key), key)
        {
            return items->value;

        }

    }
    return (NULL);
}