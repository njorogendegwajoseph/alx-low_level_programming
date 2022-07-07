#include <unistd.h>
/**
 * _putchar writes the character c to stdout
 * return: always 0 when success.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
