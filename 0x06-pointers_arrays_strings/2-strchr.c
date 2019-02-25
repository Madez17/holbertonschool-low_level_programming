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
	if (s[cont] == '\0')
	{
		return ('\0');
	}
	return (0);

}
