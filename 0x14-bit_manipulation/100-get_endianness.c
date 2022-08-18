#include "main.h"

/**
* get-endianness: Checks the endianess.
*
* return: If big-endian - 0.
* If little_endian - 1.
*/

int get_endianness(void)
{
    int num = 1;
    char *endian = (char *)&num;

    if (*endian == 1)
    return (1);

    return (0);
}