#include <stdio.h>

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{	
		if (n % 3 == 0 && !(n % 5 == 0))
				printf("Fizz");
		else if (n % 5 == 0 && !(n % 3 ==0))
				printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
				print("FizzBuzz");

		else
			print("%d", n);


		if (n != 100)
			print(' ');
		else 
			print('\n');
	}
	return (0);
}