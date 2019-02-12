#include "holberton.h"

/**
* print_alphabet_x10 - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char az = 'a';
	int c = 1;

	while (c <= 10)
	{
		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		az = 'a';
		_putchar('\n');
		c++;
	}
}

