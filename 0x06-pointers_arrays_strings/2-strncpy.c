#include "main.h"
/**
 * strncpy_ This will cpoy the string
 * @dest - checked
 * @str - checked
 * @n - checked
 * return dest.
 */

char *_strncpy(char *dest, char *str, int n)
{
	int i;

	i = 0;

	while (i < n && src [i])
	{
		dest[i] = src[i];
	}
	
	while ( i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}


