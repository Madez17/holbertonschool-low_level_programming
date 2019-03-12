#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Function
 *
 * @d: structure
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
