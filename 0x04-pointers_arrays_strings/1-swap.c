#include "holberton.h"

/**
* swap_int - Reasigned value
*
* @n: This is a pointers
*
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int z;
	
	z = *a;
	*a = *b;
	*b = z;
}
