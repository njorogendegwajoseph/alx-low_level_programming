#include "main.h"
/**
 * strlen: will return string length
 * return : This returns the length of the string.
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
//assuming we dont use the string header file.