HashTable* create_table(int size)
{
    //Creates a new HashTable
        HashTable* table = (HashTable*)malloc(sizeof(HashTable));
        table->size = size;
        table->count = count;
        table->items = (Ht_item**) calloc(table->size, sizeof(Ht_item*));

        for (int i = 0; i < table->size; i++)
            table->item[i] = NULL;
        
        return table;
}