#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create array - this one creates an array of chars and initialize
 *  	with a specific char.
 *  	@size - the size of the array to be initialized.
 *  @c - the specific char to be initialized with.
 *  Return  - if the function fails r the oterwise retun 0.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
