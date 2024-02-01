void print_table(HashTable* table)
{
	printf("\nHash Table\n-------------------\n");
	for (int i = 0; i <table ;i++)
	{
		if (table->items[i])
		{
				printf("Index:%d, key:%s, Value:%s", i,table->items[i] -> key, table->items[i] -> value);
		}
	}
	printf("-------------------\n\n");
}
