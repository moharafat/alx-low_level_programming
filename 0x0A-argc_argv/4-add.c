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
    int sum;

    if (argc == 1)
	{
		printf("0\n");
    }
    else
    {
        sum = atoi(argv[1] + atoi(argv[2]))
    }
    return (0);
}
