#include "holberton.h"

/**
* _puts - Exchange the value
*
* @a: Value 98
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
