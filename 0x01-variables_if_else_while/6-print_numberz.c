#include <stdio.h>

/**
 * main- prints singl digits of base 10 from 0
 * followed by a new line when putchar applied
 *
 * return _this returns 0 when succesful.
 */

int main(void)
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
