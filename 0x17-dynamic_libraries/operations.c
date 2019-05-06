#include "operators.h"

/**
* add - Function add elemets
*
* @a: First parameter
* @b: Second parameter
*
* Return: Sum that two elements
*/

int add(int a, int b)
{
        int sum;
	sum = a + b;
        return (sum);
}

/**
* sub - Function substrae elemets
*
* @a: First parameter
* @b: Second parameter
*
* Return: substrae that two elements
*/

int sub(int a, int b)
{
        int sub;
        sub = a - b;
        return (sub);
}

/**
* mul - Function multiplication elemets
*
* @a: First parameter
* @b: Second parameter
*
* Return: mul that two elements
*/

int mul(int a, int b)
{
        int mul;
        mul = a * b;
        return (mul);
}

/**
* div - Function divide two elemets
*
* @a: First parameter
* @b: Second parameter
*
* Return: div two elements
*/

int div(int a, int b)
{
        int div;
        div = a / b;
        return (div);
}

/**
* mod - Function mod two elemets
*
* @a: First parameter
* @b: Second parameter
*
* Return: mod that two elements
*/

int mod(int a, int b)
{
        int mod;
        mod = a % b;
        return (mod);
}
