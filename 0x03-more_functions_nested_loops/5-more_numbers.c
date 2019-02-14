#include "holberton.h"

/**
* more_numbers - check the code for Holberton School students.
*
* Return: Always 0.
*/
void more_numbers(void)
{
	int times = 0;
	int nums;

	while (times <= 9)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			if (nums > 9)
			{
				_putchar(nums / 10  + '0');
			}
			_putchar(nums % 10 + '0');
		}
		times++;
		_putchar('\n');
	}
	nums = 0;
}
