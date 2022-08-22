#include "main.h"

/**
* set_bit- Set the value of a bit at given index.
* @n: A pointer to th bit.
* @index: The index to set the value at.
* return: If error occurs -1, otherwise 1.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
    return (-1);

    *n ^= (1 << index);

    return (1);
}