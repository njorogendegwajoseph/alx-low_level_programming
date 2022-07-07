#include "main.h"
/**
* _intisupper: checks if the character is upper or lower cas
* Return: This returns 0 when lowercase and 1 when upprcase.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else  
		return (0);
}
