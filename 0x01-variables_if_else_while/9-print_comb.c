#include <stdio.h>

/**
 * main- this will print single digits combinations
 * return - this will return 0 when succesful
 */

int main(void)
{
int i;
i = 48;
while (i < 58)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
i++;
}
putchar(10);
return (0);
}
