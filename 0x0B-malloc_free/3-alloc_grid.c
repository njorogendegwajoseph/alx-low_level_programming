#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2d array.
 * @width: The width of the 2d array.
 * @height - The height of the 2d arrayy.
 * Return NULL if it fails.
 *
 */

int **alloc_grid(int width, int height)
{
	int **twoD;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twoD[hgt_index] == malloc(sizeof(int) * width);

		if (twoD[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twoD[hgt_index]);

			free(twoD);
			return (NULL);
		}
	}
	return (twoD);
}
