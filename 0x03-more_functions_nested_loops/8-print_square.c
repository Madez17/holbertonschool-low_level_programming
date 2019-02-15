#include "holberton.h"

/**
* print_square - check the code for Holberton School students.
*
*@size: size of the square
*
* Return: Always 0.
*/
void print_square(int size)
{
	int line = 0;

	while (line < size)
	{
		line++;
		_putchar('#');
		_putchar('\n');
	}
}
