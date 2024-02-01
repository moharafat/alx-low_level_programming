Ht_item* create_item(cahr* key char* value)
{
	/*Create a pointer to a new Hashtable item.*/

	Ht_item = (Ht_item*)malloc(sizeof(Ht_item));

	item->key = (char*)malloc(strlen(key) + 1);

	item->valuec= (char*)malloc(strlen(value)+1);
	
	strcpy(item->key, key);
	strcpy(item->value, value)
	return item;
}
