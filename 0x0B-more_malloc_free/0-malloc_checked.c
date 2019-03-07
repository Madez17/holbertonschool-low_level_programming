#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 *
 * @b: size of lenght
 *
 * Return: Always p.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (!p)
	{
		exit(98);
	}
	return (p);
}
