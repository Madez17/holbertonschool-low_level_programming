#include "holberton.h"

/**
* print_diagonal - check the code for Holberton School students.
*
*@n: cantidad de veces que imprime.
*
* Return: Always 0.*/
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(92);
		_putchar(' ');
		n--;
	}
	_putchar('\n');
}
