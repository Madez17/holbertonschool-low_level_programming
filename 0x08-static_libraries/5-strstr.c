#include "holberton.h"

/**
 * _strpbrk - Serch substring
 *
 * @_haystack: Value string
 *
 * @needle: string
 *
 * Return: beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	haystack[0] = needle[0];
	return (haystack);
}
