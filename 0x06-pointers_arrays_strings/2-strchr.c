#include "holberton.h"
#include <stdio.h>
/**
 * _strchr- string.
 *
 * @s: Array of elements.
 *
 * @c: char to compare.
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int cont;

	for (cont = 0; *(s + cont) != '\0'; cont++)
	{
		s++;
		if (*(s + cont) == c)
		{
			return (s);
		}
	}
	return ('\0');

}
