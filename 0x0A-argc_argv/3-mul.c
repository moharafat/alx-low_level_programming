#include <stdio.h>

/**
 * main - Write a program that multiplies two numbers.
 *@argc: int
 *@argv: string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}