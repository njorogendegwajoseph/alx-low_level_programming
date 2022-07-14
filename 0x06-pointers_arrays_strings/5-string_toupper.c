#includde "main.h"
/**
 * string_toupper - chchange lowerscase to upper case
 * @p string will be modified.
 * return char var
 *
 */

char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}

