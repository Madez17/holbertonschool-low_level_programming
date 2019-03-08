#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code for Holberton School students.
 *
 * @b: size of lenght
 *
 * Return: Always p.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int cont;

	p = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (!p)
	{
		return (NULL);
	}
	for (cont = 0; cont < nmemb * size; cont++)
	{
		p[cont] = 0;
	}
	return (p);
}
