#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n > 5)
    printf("Last digit of n %i and is greater than 5/n"n)
    if (n < 6 , n =! 0)
    printf("Last digit of n %i and is less than 6 and not 6/n"n)
    else
    printf("Last digit of n %i and is 0/n"n)

	return (0);
}