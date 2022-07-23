#include <stdio.h>

/**
 *main - prints its name, followed by a new line
 @args - number of command line args.
 @argv- array that contains the program command line args.
 Return 0 on success.
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
