#include <stdio.h>

/**
 * main- this will print lowercase alphabet in reverse
 * followed by a new line
 *
 * return - this will rturn 0 when succesful
 */

int main(void)
{
int i = 122;
while (i > 96)
{
putchar(i);
i--;
}
putchar(10);
return (0);
}

