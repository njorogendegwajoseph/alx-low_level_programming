#include "main.h"
/**
 * puts2: will prisnt every other characteer of string 
 * @str- string to be printed
 * return 0;
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		_putchar(str[a]);
	}
	_putchar('\n');
}
