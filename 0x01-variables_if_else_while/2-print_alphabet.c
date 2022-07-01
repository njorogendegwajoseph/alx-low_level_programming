#include <stdio.h>

/**
 * main-prints the alphabet in the said lowercase
 * followed by a new line
 * return - always return 0 when succesful
 */

int main(void)
{
	char ch;

	for (ch = 'a';  ch <= 'z'; ch++)
		{
			ptchar(ch);
		}
		putchar('\n');
		return (0);
}
