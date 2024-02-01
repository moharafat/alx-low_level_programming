void free_item(Ht_item* item)
{
    //Frees an item.
    free(item->key);
    free(item->value);
    free(item);
}

void free_table(HashTable* table)
{
    //Frees Tables
    for (int i = 0; i < table->size; i++)
    {
        Ht_item* item = table->item[i];
        if (item != NULL)
            free (item);
    }
    free(table->items);
    free(table);
}