#include "holberton.h"

/**
* _strcpy - Function that reverse a string
*
* @dest: Array
*
* @src: copy array
*
*/

char *_strcpy(char *dest, char *src)
{
	int cont;

	for (cont = 0; *(src + cont) != 0; cont++)
	{
		*(dest + cont) = *(src + cont);
	}
	return (dest);
}
