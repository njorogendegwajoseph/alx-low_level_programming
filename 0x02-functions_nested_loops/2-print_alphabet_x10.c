#include "main.h"
/**
 * print_alphabet_x10 - this prints the alphabets ten times
 *
 * return 0 when succesful
 *
 */

void print_alphabet_x10(void)
{
char ch;
int i;

i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
