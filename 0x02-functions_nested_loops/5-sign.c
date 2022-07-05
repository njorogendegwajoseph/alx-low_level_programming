#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * return 1 i and prints + when greater than 0,
 * returns 0 when number is 0
 * returns -1 if number is less than 0.
 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(40);
return (0);
}
else if (n < 0 )
{
_putchar('-');
}
return (-1);
}
