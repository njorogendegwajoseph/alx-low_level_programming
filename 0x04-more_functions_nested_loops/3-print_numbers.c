#include "main.h"
/**
 * print _numbers : this will print numbers from 0-9
 * return: this will return 0 when succesful.
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a >= 0 && a <= 9)
		_putchar("%d\n", a);
	a++;
}
