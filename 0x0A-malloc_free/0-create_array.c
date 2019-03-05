#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creaate array asign memory space
 * @size: the address of memory to print
 * @c: char
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int iterarray;

	p = malloc(sizeof(*p) * size); /*asigna espacio de memoria a ocupar*/
	if (size == 0)
		return (NULL);

	for (iterarray = 0; iterarray < size; iterarray++)
	{
		if (!p)
		{
			return (NULL);
		}
		p[iterarray] = c;
	}
	return (p);
}
