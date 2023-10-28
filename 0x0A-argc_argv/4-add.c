#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that adds positive numbers.
 * *@argc: int
 * @argv: string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *n;

	while (--argc)
	{
		for (n = argv[argc]; *n; n++)
		{
			if (*n < 48 || *n > 57)
			{
			printf("Error\n");
			return (1);
			}
		}
		sum = sum + atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
