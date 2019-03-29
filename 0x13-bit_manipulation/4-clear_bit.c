#include "holberton.h"

/**
 * clear_bit - set value
 *
 * @n: number
 * @index: position
 *
 * Return: 1 is succesful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = (~mask << index) & (*n);
	return (1);
}
