#include "main.h"
/**
 * main - entry point
 * @argc: arguments num.
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *file;
	char buffer[50];

	if (argc != 2)
	{
		write(2, "EXIT_FAILURE", 15);
	}
	file = fopen(argv[1], 'r');
	if (file == NULL)
	{
		printf("Error: Can't open file <file>");
		exit(EXIT_FAILURE);
	}
	if (file != NULL)
	{
		while (fgets(buffer, sizeof(buffer), file) != NULL)
		{
		printf("%s", buffer);
		}
		fclose(file);
	}
	else
	{
		printf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	return (0);
}
