#include "main.h"

/**
binary_to_uint - Converts the binary to unsigned int.
* @b: A pointer to a string of 0 and 1 chars.
* return: If b is NULL or car are not  0 and 1.
* Otherwise, the converted number.
*
*/

unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    int len = 0;

    if (b[len] == '\0')
    return (0);

    while ((b[len] == '0') || (b[len] == '1'))
    {
        num <<= 1;
        num += b[len] - '0';
        len++;
    }
    return (num);
}