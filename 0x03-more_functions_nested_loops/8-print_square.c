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
	int line;
	int row;
	int space;
	
	for (row = 0; row < size; row++);
	{
		for (line = 0; line < size; line++);
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
