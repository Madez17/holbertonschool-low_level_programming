#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that copy my string.
 *
 * @str: string char
 *
 * Return: Pointer.
 */
char *_strdup(char *str)
{
	char *p;
	int lenght = 0;
	int itercpy;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[lenght] != '\0')
		lenght++;

	p = malloc(sizeof(*p) * lenght + 1);
	if (!p)
	{
		return (NULL);
	}
	for (itercpy = 0; itercpy <= lenght; itercpy++)
	{
		p[itercpy] = str[itercpy];
	}
	return (p);
}
