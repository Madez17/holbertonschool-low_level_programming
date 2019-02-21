#include "holberton.h"

/**
  * puts_half - Function that reverse a string
  *
  * @str: String Holberton
  *
 */
void puts_half(char *str)
{
	int cont;
	int divstring;

	for (cont = 0; *(str + cont) != '\0'; cont++)
	{
	}
	if (cont % 2 != 0)
		divstring = (cont + 1) / 2;
	else
		divstring = cont / 2;

	for (cont = divstring; *(str + cont) != '\0'; cont++)
	{
		_putchar(*(str + cont));
	}
	_putchar('\n');
}
