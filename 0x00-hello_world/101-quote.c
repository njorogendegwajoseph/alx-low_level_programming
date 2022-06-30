#include <stdio.h>
#include <unistd.h>
/**
 * main-This is the entry point
 *
 * Return - a  function that returns 1 Meaning success.
 */
int main()
{
	char str1[] = "and that piece of art is beautiful\" -Dora Korpar, 2015-10-19\n";
	
	write(2, str1, 59);
	return (1);
}
