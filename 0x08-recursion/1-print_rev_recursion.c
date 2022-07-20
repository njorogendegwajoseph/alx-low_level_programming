#include "main.h"

/**
 * _print_rev_recursion - will print the string in reverse.
 * @s string.
 */

void _print_rev_string(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
