#include "holberton.h"

/**
* _strncat - concatenacion.
*
* @dest: dest array
*
* @src: array
*
* @n: position
*
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
	int cont1 = 0;
	int cont2;

	while (*(dest + cont1) != '\0')
	{
		cont1++;
	}
	for (cont2 = 0; *(src + cont2) != '\0' && cont2 < n; cont2++)
	{
		*(dest + cont1) = *(src + cont2);
		cont1++;
	}
	*(dest + cont1) = '\0';
	return (dest);
}
