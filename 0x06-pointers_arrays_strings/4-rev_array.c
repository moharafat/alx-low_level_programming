#include "main.h"
/**
 * 
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i, n, temp;

   for (i = 0; a[i] != '\0'; i++)
   {
   }
   for(l = 0; n < i / 2; l++)
   {
	temp =a[i];
	a[i] = a[n - 1];
	a[n - 1] = temp;
   }
}
