#include <stdio.h>
/**
 * prints the alphabets in lower case, then converts them to upprcase
 * followed by a new line
 *
 * return - this always return 0 when succesful
 */

int main(void)
{
	int ch;
	
	for (ch = 'a' ; ch <= 'z' ; ch++);
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++);	
		putchar(ch);
	putchar(\n);
	return (0);
}
