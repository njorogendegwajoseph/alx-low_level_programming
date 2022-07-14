#include "main.h"
/**
 * rot13: encodes a string using rot13
 * @s inputs thes the string
 * return _ the pointer back to dest.
 *
 */

char *rot13(char *s)
{
	int a = 0, i;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + a) == letters[i])
			{
				*s(s + a) = rot13[i];
				break;
			}
		}
		a++;
	}

	return (s);
}

