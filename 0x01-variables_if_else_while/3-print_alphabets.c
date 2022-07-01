#include <stdio.h>
/**
 * prints the alphabets in lower case, then converts them to upprcase
 * followed by a new line
 *
 * return - this always return 0 when succesful
 */

int main(void)
{
int i, j;
i = 97;
j = 65;
while (i < 123)
{
putchar(i);
i++;
}
while (j <91)
{
putchar(j);
j++;
}
putchar(10);
return (0);
