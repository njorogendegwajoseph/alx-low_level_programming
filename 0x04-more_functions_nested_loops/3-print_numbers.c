#include "main.h"
/**
 * print _numbers : this will print numbers from 0-9
 * return: this will return 0 when succesful.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

