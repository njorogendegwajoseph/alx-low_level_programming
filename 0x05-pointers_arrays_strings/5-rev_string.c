#include "main.h"
/**
 *
 *
 *
 */
void rev_string(char *s)
{
	int i;
	int size = 0;
	char rev[10000];

	while (s[size] != '\0')
	{
		size++;
	}
	size--;
	for (i = 0; i <= size; i++)
	{
		rev[i] = s[size - i];
	}
	for (i = 0; i <= size; i++)
	{
		s[i] = rev[i];
	}
}
