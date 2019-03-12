#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function
 *
 * @d: structure
 * @name: Name.
 * @age: Age.
 * @owner: owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
