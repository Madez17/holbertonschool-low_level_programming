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
char *_strdup(char *str)
{
	char *p;
	int iterstr = 0;
	int itercpy;
	
	while (str[iterstr] != '\0')
		iterstr++;

	p = malloc(sizeof(*p) * iterstr + 1);
	
	if (str == NULL)
	{
		return (NULL);
	}
	if (!p)
	{
		return (NULL);
	}

	for (itercpy = 0; itercpy <= iterstr; itercpy++)
	{
		p[itercpy] = str[iterstr];
	}
	return (p);
}
