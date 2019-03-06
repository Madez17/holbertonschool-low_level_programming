#include "holberton.h"
#include <stdio.h>
#include <stdlib.h> 
/**
  * lenght_str - Calcular el tamaño de un string
  * @str: string 
  */
int lenght_str(char *str)
{
	int lenght;

	for (lenght = 0; str[lenght] != '\0'; lenght++)
		;
	return (lenght);
}
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
char *str_concat(char *s1, char *s2)
{
	int str1;
	int str2;
	int cont;
	char *p;

	str1 = lenght_str(s1);
	str2 = lenght_str(s2);
	
	p = malloc(sizeof(char) * str1 + str2);
	
	for (cont = 0; cont <= str1; cont++)
	{
		p[cont] = s1[str1];
	}
	for (cont = 0; str2 >= str1; cont++)
	{
		p[cont] = s2[str2]
	}

}
