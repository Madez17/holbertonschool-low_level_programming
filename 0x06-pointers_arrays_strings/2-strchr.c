#include "holberton.h"
/**
 * _strchr - string.
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
		if (s[cont] == c)
		{
			return (&s[cont]);
		}
	}
	if (c == '\0')
	{
		return (&s[cont]);
	}
	return (0);

}
