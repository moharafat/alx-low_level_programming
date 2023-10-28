#include <stdio.h>

/**
 * main - Write a program that multiplies two numbers.
 *@argc: int
 *@argv: string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int multiplication;
	if ( argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	multiplication = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiplication);
	}
	return (0);
}
