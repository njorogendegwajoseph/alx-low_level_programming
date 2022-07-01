#include <stdio.h>

/**
 * main -this will print all the numbers of base 16 lowercase
 * then a new line added
 *
 * return - this will return 0 when succesful.
 */

int main(void)
{
	int n;
	char ch;

	for (n = 48;  n < 58; n++);
	{
		putchar(n);
	}
	for (ch = 'a'; ch < 'f'; ch++);
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
