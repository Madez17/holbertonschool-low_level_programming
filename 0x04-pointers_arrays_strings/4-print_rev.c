#include "holberton.h"

/**
* print_rev - Function string var
*
* @s: String Holberton
*
* Return: Always 0.
*/
void print_rev(char *s)
{
	int strlong;

	while (s[strlong])
		strlong++;
	while(strlong--)
		_putchar(s[strlong]);
	_putchar('\n');
}
