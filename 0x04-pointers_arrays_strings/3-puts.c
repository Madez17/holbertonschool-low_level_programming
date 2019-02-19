#include "holberton.h"

/**
* _puts - Function string var
*
* @str: String Holberton
*
* Return: Always 0.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
