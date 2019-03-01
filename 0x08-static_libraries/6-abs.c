#include "holberton.h"

/**
* _abs - check the code for Holberton School students.
*
* @n: n
*
* Return: Always 0.
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	return (0);
}
