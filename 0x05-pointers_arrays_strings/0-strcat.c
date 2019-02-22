#include "holberton.h"

/**
* _strcat - concatenacion.
*
* @dest: dest array
*
* @src: array
*
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
	int cont1 = 0;
	int cont2;

	while (*(dest + cont1) != '\0')
	{
		cont1++;
	}
	
	for (cont2 = 0; *(src + cont2) != '\0'; cont2++)
	{
		*(dest + cont1) = *(src + cont2);
		cont1++;
	}
	*(src + cont2) = '\0';
	return (dest);
}
