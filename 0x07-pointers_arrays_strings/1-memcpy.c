#include "main.h"
/**
 * _memcpy - this copies the memory area.
 * @dest- char memory to copy into.
 * @src - from where we copy.
 * @n - the number of elements to copy.
 * return pointer to dest.
 */

char _memcpy(char *dest, char *src, unsigned int n)
{
	char *finesse;

	finesse = dest;
	while ( n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (finesse);
}

