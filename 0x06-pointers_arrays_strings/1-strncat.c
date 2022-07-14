#include "main.h"
/**
 * strncat- appends the string
 * @dest - appended on.
 * @strn- checked
 * return dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
		j++;

	}

	i = 0;

	while (*(src + i) != *(src + n))
	{
		dest[j] =src[i];
		i++;
		j++
	}
	dest[j] = '\0';

	return (0);
}
