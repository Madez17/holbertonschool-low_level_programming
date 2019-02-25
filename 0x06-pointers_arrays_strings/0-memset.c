#include "holberton.h"
#include <stdio.h>
/**
  * _memset- chage memory space
  *
  * @s: Array of elements.
  *
  * @b: value to replace
  *
  * @n: bytes of the memory
  *
  * Return: String Uppercase
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cont;

	for (cont = 0; cont < n; cont++)
	{
		*(s + cont) = b;
	}
	return (s);
}
