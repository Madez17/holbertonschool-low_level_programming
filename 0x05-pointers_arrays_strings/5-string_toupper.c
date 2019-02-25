#include "holberton.h"
#include <stdio.h>
/**
* string_toupper- chage posicion elements into array.
*
* @str: Array of elements.
*
* Return: String Uppercase
*/
char *string_toupper(char *str)
{
	int az;
	int cont;

	for (cont = 0; *(str + cont) != '\0'; cont++)
	{
		for (az = 'a'; az != 'z'; az++)
		{
			if (*(str + cont) == az)
				*(str + cont) = *(str + cont) - 32;
		}
	}

	return (str);

}
