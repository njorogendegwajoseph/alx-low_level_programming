#include <main.h>

/**
 * main- this will print the last digit of a number
 * return 0 when succesful.
 *
 */
int print_last_digit(int n)
{
int a;
if (n < 0)
n = -n;

a = n % 10;

if (a < 0)
a = -a;

_putchar(a + '0');

return (a);
}
