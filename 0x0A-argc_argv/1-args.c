#include <stdio.h>

/**
 * main - print the program name + new line
 *@argc: int
 *@argv: string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", *argv[]);
	return (0);
}
