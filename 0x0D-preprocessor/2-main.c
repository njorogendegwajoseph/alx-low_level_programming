#include <stdio.h>

/**
 *main - Prints the name of the file of the program it was compiled from.
 *
 * return 0 when succesful.
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
