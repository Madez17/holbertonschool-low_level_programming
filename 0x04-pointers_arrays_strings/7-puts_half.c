#include "holberton.h"

/**
  * puts2 - Function that reverse a string
  *
  * @str: String Holberton
  *
 */
void puts_half(char *str)
{
	int cont;
	int div;

	for (cont = 0; *(str + cont) != '\0'; cont++)
	{
	}
	div = cont / 2;
	for (cont % 2 != 0)
		div (cont + 1) / 2;
	else
		div = cont / 2;
	while (*(str + cont) != '\0')
	{
		_putchar(*(str + cont));
		cont++
	}

	_putchar(10);

}
