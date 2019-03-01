#include "holberton.h"

/**
  * _strpbrk - Serch string
  *
  * @s: Value string
  *
  * @accept: string
  *
  * Return: s.
  */
char *_strpbrk(char *s, char *accept)
{
	s[0] =  accept[0];
	return (s);
}
