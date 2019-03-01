#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - Return lenght
 *
 * @s: Array of elements.
 *
 * @accept: bytes to compare
 *
 * Return: coincidencia
 */
unsigned int _strspn(char *s, char *accept)
{
	int cont1;
	int cont2;
	unsigned int coincidencia = 0;
	unsigned int aux = 0;

	for (cont1 = 0; s[cont1] != '\0'; cont1++)
	{
		for (cont2 = 0; accept[cont2] != '\0'; cont2++)
		{
			if (s[cont1] == accept[cont2])
				coincidencia++;
		}
		if (aux == coincidencia)
		{
			break; /*compara que aux y conincidencia son iguales*/
		}
		else
		{
			aux = coincidencia; /*iguala aux con coincidencia */
		}
	}
	return (coincidencia);
}
