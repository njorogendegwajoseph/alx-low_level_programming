#include "main.h"

/**
 * factorial - factorial of a given number.
 * @n ; a pointer block to memory to fill.
 * return: The actual factorial.
 */

int factorial(int n)
{
	if (n == 0) /*Base cnd.*/

		return (1);

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1)); /*Recursion*/
}
