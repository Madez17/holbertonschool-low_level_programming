#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Function
 *
 * @d: structure
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
