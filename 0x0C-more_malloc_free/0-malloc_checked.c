#include <stdlib.h>
#include "main.h"

/**
 * malloc-checked - allocates using malloc
 * @b: number of bytes allocated.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem ==NULL)
		exit(98);

	return (mem);
}
