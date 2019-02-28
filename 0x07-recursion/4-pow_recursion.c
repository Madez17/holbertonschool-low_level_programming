#include "holberton.h"
/**
 * _pow_recursion - Function.
 *
 * @x: Base.
 *
 * @y: Exponente.
 *
 * Return: Num elevado a la potencia.
 */
int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
