#include "function_pointers.h"

/**
 * int _index: Searches for an integer in an array of integers.
 * @array: The array.
 * @size: Size of the arrray.
 * @cmp: A pointer to a function that comparesvalues.
 *
 * Return: If no element match, -1, else 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
