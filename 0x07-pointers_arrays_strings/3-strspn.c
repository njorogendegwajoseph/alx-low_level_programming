#include "main.h"
/**
 * _strspn - gets the length of the string.
 * @s - string.
 * @accept: string.
 * returns an int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	int i;

	x = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				x++;
				break;
			}
			else if (accept[i + 1])
			{
				return (x);
			}
		}
		s++;
	}
}
