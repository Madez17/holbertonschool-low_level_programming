#include "holberton.h"
/**
 * _puts_recursion - Function.
 *
 * @s: Pointer first position array.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
