#include "holberton.h"

/**
 *_strlen_recursion - Function.
 *
 *@s: Pointer first position array.
 *
 *Return: Cont
 */
int _strlen_recursion(char *s)
{
	int cont = 0;

	if (*s != '\0')
	{
		cont = _strlen_recursion(s + 1);
		cont++;
		return (cont);
	}
	return (0);
}
