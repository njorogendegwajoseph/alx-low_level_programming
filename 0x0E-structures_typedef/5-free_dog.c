#include "dog.h"
#include <stdlib.h>

/**
 * free-dog: free memory of te dog.
 * @d: pointer to the dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
