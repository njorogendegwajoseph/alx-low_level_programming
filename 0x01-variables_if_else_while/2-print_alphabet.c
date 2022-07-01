#include <stdio.h>

/**
 * main-prints the alphabet in the said lowercase
 * followed by a new line
 * return - always return 0 when succesful
 */

int main(void)
{
	char ch;
	int i;

	ch = 97;
	i = 0;
	while (i < 26)
		{
			ptchar(ch);
			ch++;
			i++;

		}
		putchar(10);
		return (0);
}
