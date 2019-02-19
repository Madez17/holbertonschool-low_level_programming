#include "holberton.h"

/**
* print_triangle - check the code for Holberton School students.
*
*@size: space.
*
* Return: Always 0.
*/
void print_triangle(int size)
{
	int space;
	int hash;
	int t = size;

	if (size == 0)
		_putchar('\n');

	while (size > 0)
	{
		for (space = 0; space < size - 1; space++)
		{
			_putchar(' ');
		}

		for (hash = 0; hash < t - space; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
		size--;
	}
}
