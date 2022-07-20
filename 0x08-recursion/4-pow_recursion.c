#include "main.h"

/**
 * _pow_rcursion - returns the value of x raised to y.
 * @x :integer.
 * @y integer.
 * Return: Pow recursion.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /*Base*/
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}

