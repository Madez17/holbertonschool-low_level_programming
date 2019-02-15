#include "holberton.h"

/**
* print_diagonal - check the code for Holberton School students.
*
*@n: Veces que imprime.
*
* Return: Always 0.
*/
void print_diagonal(int n)
{
	int space;
	int line = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (line < n)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			line++;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
