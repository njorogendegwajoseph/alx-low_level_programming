#include "main.h"
/**
 * print_mostNumbers: will print numbers from 0-9, excpt 2 and 4.
 * return: returns 0 when succesful.
 *
 */
void print_most_numbers(void)
{
	int a;


	for (a = 0; a < 10; a++)
	{ 
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar("\n");
}
