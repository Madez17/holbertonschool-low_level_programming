#include "holberton.h"

/**
* print_triangle - check the code for Holberton School students.
*
*@n: Veces que imprime.
*
* Return: Always 0.
*/
void print_triangle(int size)
{
	int space;

	while (size > 0)
	{
		for (space = 0; space <= size; space++)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
		size--;
	}
	_putchar('\n');
}
