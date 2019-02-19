#include "holberton.h"

/**
* swap_int - Exchange the value
*
* @a: Value 98
*
* @b: Value 42
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
