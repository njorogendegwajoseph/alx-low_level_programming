#include <unstd.h>

/**
* _putchar - writes the char c to stdout.
*
*/

int _putchar(char)
{
    return (write(1, &c, 1));
}
