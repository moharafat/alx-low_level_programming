#include <stdio.h>

/**
 * print the program name + new line
 *@argc: int
 *@argv: list
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
