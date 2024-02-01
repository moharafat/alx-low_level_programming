#include <stdio.h>

#define CAPACITY 50000

unsigned long hash_function(char * str)
{
    unsigned long i = 0;
    for(int j = 0; str[j]; j++) 
    {
        i = i + str[j];
    }

    return i % CAPACITY;    
}

void main(void)
{
    unsigned long i;

    i = hash_function("Hel");
    printf("%li\n", i);
    printf("%li\n", hash_function("Cau"));
    printf("%li\n", hash_function("Mohamed"));
}