#include "holberton.h"
#include <stdio.h>
/**
 * _memcpy- memory copy
 *
 * @dest: Array of elements copy.
 *
 * @src: Array of elements
 *
 * @n: bytes of the memory
 *
 * Return: String Uppercase
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont;

	for (cont = 0; cont <= n; cont++)
	{
		*(dest + cont) = *(src + cont);
	}
	return (dest);

}
