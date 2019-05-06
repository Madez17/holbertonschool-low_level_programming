#include "holberton.h"
#include <stdio.h>
/**
* _strcmp - concatenacion.
*
* @s1: dest array
*
* @s2: array
*
* Return: Always 0.
*/
int _strcmp(char *s1, char *s2)
{
	int result;
	int cont;

	for (cont = 0; *(s1 + cont) != '\0'; cont++)
	{
		result = *(s1 + cont) - *(s2 + cont);
		if (result != 0)
		{
			break;
		}
	}
	return (result);
}
