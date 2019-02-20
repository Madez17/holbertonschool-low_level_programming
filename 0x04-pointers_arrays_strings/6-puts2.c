#include "holberton.h"

/**
* puts2 - Function that reverse a string
*
* @str: String Holberton
*
*/
void puts2(char *str)
{
	int contstring;

	for (contstring = 0; *(str + contstring) != '\0'; contstring++)
	{
		if (contstring % 2 == 0)
		{
			_putchar(*(str + contstring));
		}
	}
	_putchar('\n');
	contstring--;
}
