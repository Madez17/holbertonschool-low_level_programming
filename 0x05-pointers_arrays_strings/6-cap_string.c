#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper- chage posicion elements into array.
 *
 * @str: Array of elements.
 *
 * Return: String Uppercase
 */
char *cap_string(char *str)
{
	int cont;
	char symbols[] = {32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int conts;

	for (cont = 0; *(str + cont) != '\0'; cont++)
	{
		for (conts = 0; conts < 11; conts++)
		{
			if (*(str + cont) == symbols[conts])
			{
				conts++;
				*(str + cont) = *(str + cont) - 32;
			}
			else
			{
				conts++;
			}
		}
	}
	return (str);
}

