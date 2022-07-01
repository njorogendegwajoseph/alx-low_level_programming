#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main- assigns a random number to n always
*It executes and prints n.
*return - returns 0 when succesful.
*/
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
	
		printf("%d is positive number\n", n);
	}
	else if (n==0)
	{
		printf("%d is zero\n", n);
	}
	else if (n<0)
	{
		printf("%d is negative number\n", n);
	}
	return (0);
}
