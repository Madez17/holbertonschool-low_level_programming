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
		if (s[0] == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');

}
