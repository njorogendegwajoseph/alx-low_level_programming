#include <stdio.h>
/**
 * main - print double digit combo
 *
 * description : print double combos
 *
 * Return -Always retun 0 when (success)
 */
int main(void)
{
int i, j;
i = 48;
j =48;
while (i < 58)
{
j = i + 1;
while (j < 58)
{
putchar(i);
putchar(j);
if (i < 56 || j < 57)
{
putchar(44);
putchar(32);
}
j++;
}
i++;
}
putchar(10);
return (0);
}

