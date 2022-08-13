#include "main.h"
/**
 *
 * _isdigit : checks if the number is from 0 -9.
 * return : This will return 0 when not a digit and 1 when it is.
 */
int _isdigit(int c)
{
	if ( c >= '0' && c <= '9')
		return (1);
	else  
		return (0);
}
