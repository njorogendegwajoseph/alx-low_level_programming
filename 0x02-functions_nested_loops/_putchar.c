#include <unistd.h>

/**
 * _putchar- writes the character c to stdout
 * @c: The character to print
 *
 * Return 1 when succesful
 * Error, -1 is returned and error numbergiven appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
