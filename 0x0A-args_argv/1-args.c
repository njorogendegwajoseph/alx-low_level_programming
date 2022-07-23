#include <stdio.h>
/**
 * main - prints te number o args passed
 * @args - number of command line args
 * @argv - array with cl args.
 * Retuurn 0 when succesful.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
