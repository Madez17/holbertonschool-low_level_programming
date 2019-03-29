#include "holberton.h"

/**
 * binary_to_uint - convert binary number to integer
 *
 * @b: string
 *
 * Return: save
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int iter = 0;
	unsigned int b_number = 0;

	if (b == NULL)
		return (0);

	while (b[iter])
	{
		if (b[iter] != '0' && b[iter] != '1')
			return (0);

		b_number = b_number << 1;
		b_number |= b[iter] - '0';
		iter++;
	}
	return (b_number);
}
