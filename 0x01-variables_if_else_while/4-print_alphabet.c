#include <stdio.h>

/**
 * main -This will print the alphabet in lower-case
 * then a new line, except q and e
 *
 *
 * Return- this will be 0 when succesful.
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q');
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
