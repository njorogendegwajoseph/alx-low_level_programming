#include "main.h"
/**
 * puts2: will prisnt every other characteer of string 
 * @str- string to be printed
 * return 0;
 */
void puts2(char *str)
{
	int = 0;

	while (str[i] != '\0')
	{
		if ( i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
