#include "main.h"
/**
 * printnumber- prints a nimber
 * @n -nputs an integer
 * return void.
 */

void print_number(int n)
{
	unsigned int a, b, c;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else 
	{
		a = n;
	}

	b = a;
	c = 1;

	while (b > 9)
	{
		b /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((a / c) % 10) + 48);
	}
}
