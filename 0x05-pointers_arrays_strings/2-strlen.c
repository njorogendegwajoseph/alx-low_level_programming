#include "main.h"
/**
 * strlen: will return string length
 * return 0;
 */

int _strlen(char *s)
{
	int u;
	u = 0;

	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
