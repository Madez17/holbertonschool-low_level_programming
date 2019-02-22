#include "holberton.h"
#include <stdio.h>
/**
  * _strncpy - concatenacion.
  *
  * @dest: dest array
  *
  * @src: array
  *
  * @n: position
  *
  * Return: Always 0.
  */
char *_strncpy(char *dest, char *src, int n)
{
	char cont;

	for (cont = 0; *(src + cont) != '\0' && cont < n; cont++)
	{
		*(dest + cont) = *(src + cont);

	}
	for (; cont < n; cont++)
		*(dest + cont) = '\0';
	return (dest);
}
