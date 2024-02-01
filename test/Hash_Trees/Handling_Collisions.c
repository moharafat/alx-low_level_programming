typedef struct LinkedList {
    Ht_item* item;
    struct LinkedList* next;
} LinkedList;;

LinkedList* allocate_list()
{
    //Allocates memory for a Linkedlist pointer.
    LinkedList* list = malloc(sizeof(LinkedList));
}