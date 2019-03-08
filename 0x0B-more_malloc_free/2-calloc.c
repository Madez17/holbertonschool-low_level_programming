#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Function.
 *
 * @nmemb: Elements.
 *
 * @size: Spaces bytes in my memory
 *
 * Return: My pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int cont;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	
	p = malloc(size * nmemb);

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
