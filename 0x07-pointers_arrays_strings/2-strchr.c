#include "main.h"
/**
 * _strchr - locates a char in a string.
 * @s -string
 * @c - the character.
 * return pointer to char.
 */

char *_strchr(char *s, char c)
{
	do 
	{
		if (*s == c)
		{
			break;
		}
	}
	while (*s++);

	return (s);
}
