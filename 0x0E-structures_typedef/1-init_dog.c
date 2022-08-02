#include "dog.h"

/**
 * init_dog - initialize the variable of type struct dog
 * @d: pointer to struct type  dog
 * @name: pointer to char name's dog
 * @age: dogs age
 * @owner: pointer to the owner
 * Return: No.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
