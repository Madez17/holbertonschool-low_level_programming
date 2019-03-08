#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - Array.
 *
 * @min: min value.
 *
 * @max: max value.
 *
 * Return: my pointer.
 */

int *array_range(int min, int max)
{
	int *p;
	int cont;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * size);

	if (!p)
	{
		return (NULL);
	}
	/**if (min > max)
	{
		return (NULL);
	}*/
	for (cont = 0; min <= max; cont++)
	{
		p[cont] = min;
		min++;
	}

	return (p);


}
