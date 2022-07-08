#include <stdio.h>

/**
 * main - prints largest prime factor of th number given below
 *
 *
 * return - always 0
 */
int main(void)
{
	long int n;
	long int i;


	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
