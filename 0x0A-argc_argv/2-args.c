#include <stdio.h>

/**
 * main - print the program name + new line
 *@argc: int
 *@argv: string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
}
