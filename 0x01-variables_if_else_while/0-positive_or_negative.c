#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	int n = 0;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0){
		
		printf ("is positive\n");
	}
		    
	if (n < 0){
		printf ("is negative\n");
				        }
	else {
		printf ("is zero\n");
	}
    
	return 0;
}
