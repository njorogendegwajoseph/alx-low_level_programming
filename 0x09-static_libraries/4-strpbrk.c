#include "main.h"
/**
 * _strpbrk - this will search the string for any set of bytes.
 * @s source string
 * @accept - the accepted char.
 * return: the string found accepted character
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	int a = 0;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}

