#include "main.h"
/**
 * puts2: will print every other character of string 
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
//assuming we dont use the string header file then.