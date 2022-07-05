#include <main.h>

/**
 * main- this will print the last digit of a number
 * return 0 when succesful.
 *
 */
int print_last_digit(int n)
{
if (n < 0)
n = -n;

b = n % 10;

if (b < 0)
b = -b;

putchar(b + 0);
return (b);
}
