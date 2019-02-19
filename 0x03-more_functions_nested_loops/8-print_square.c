#include "holberton.h"
#include <stdio.h>
/**
* print_square - check the code for Holberton School students.
*
*@size: size of the square
*
* Return: Always 0.
*/
void print_square(int size)
{
	int space;
	int hash;
	int t = size;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (size > 0)
		{
			for (space = 0; space < size - 1; space++)
			{
				_putchar('#');
			}
			for (hash = 0; hash < t - space; hash++)
			{
				_putchar('#');
			}
			size--;
			_putchar('\n');
		}
	}
}
