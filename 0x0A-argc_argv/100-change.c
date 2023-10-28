#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins 
 * to make change for an amount of money.
 * @argc: # of commandline arguments
 * @argv: pointer to an array of command line arguments
 * Return: always 0, 1 fail
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int n, change = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (n = 0; n < 5; n++)
		{
			if (money >= cents[n])
			{
				change = change + money / cents[n];
				money = money % cents[n];
				if (money % cents[n] == 0)
				{
					break;
				}
			}
		}
	printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
