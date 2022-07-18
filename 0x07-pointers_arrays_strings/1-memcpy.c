#include "main.h"
/**
 * _memcpy - this copies the memory area.
 * @dest- char memory to copy into.
 * @src - from where we copy.
 * @n - the number of elements to copy.
 * return pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		return (dest);
	}
}
