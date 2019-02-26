#include "holberton.h"

/**
 * print_chessboard - Serch substring
 *
 * @a: Array
 */
void print_chessboard(char (*a)[8])
{
	int horizontal;
	int vertical;
	char result;

	for (horizontal = 0; horizontal < 8; horizontal++)
	{
		for (vertical = 0; vertical < 8; vertical++)
		{
			result = a[horizontal][vertical];
			_putchar(result);
		}
		_putchar('\n');
	}
}
