#include "main.h"
/**
 * swap_int: swaps the values
 * @a: first integer
 * @b: The second integer
 * return 0;
 */

void swap_int(int *a, int *b)
{
	int f;
	f = *a;
	*a = *b;
	*b = f;
}
