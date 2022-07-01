#include <stdio.h>

/**
 * main- prints all digit numbers of base
 * 10 deacreasing to 0, followed by a new line
 *
 * return - this will return 0 upon success.
 */
int main (void)
{
int i;
i = 48;
while (i < 58)
{
putchar(i);
i++;
}
putchar(10);
return (0);
}
