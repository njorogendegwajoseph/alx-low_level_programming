#include "main.h"
/**
 * strlen: will return string length
 * return 0;
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

