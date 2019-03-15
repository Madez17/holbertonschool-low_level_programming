#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - Function suma
*
* @a: First parameter
* @b: Second Parameters
*
* Return: Suma two parameters
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Function suma
*
* @a: First parameter
* @b: Second Parameters
*
* Return: Substraction two parameters
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Function suma
*
* @a: First parameter
* @b: Second Parameters
*
* Return: Multiplication two parameters
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Function suma
*
* @a: First parameter
* @b: Second Parameters
*
* Return: Division two parameters
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - Function suma
*
* @a: First parameter
* @b: Second Parameters
*
* Return: Modulo two parameters
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
