#include <stdio.h>

/**
 * main -this will print all the numbers of base 16 lowercase
 * then a new line added
 *
 * return - this will return 0 when succesful.
 */

int main(void)
{
int i = 0;
i = 48;
while (i < 48);
{
if (i < 10)
putchar(i + '0');
else if (i > 41)
putchar(i - 10 + 'A');
i++;
}
putchar(10);
return (0);
}
