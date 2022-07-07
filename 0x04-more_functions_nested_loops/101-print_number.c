#include "main.h"
/**
 *
 *
 *
 */
void print_number(int n)
{
	unsigned int n;

	if (n < 0)
	{
		n = -n;
		_putchar('_');
	} else
	{
		n = n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n %1 10) + '0');
}
