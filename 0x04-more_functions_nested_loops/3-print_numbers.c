#include "holberton.h"
/**
 * print _numbers : this will print numbers from 0-9
 * return: this will return 0 when succesful.
 */
void print_numbers(void)
{
	int n;

	for (n = '0' ; n <= '9'; n++)
		_putchar(n);
	_putchar('\n');
}

