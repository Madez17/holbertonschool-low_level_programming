#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function principal.
 *
 * @argc: amount of parameters.
 * @argv: parameters.
 *
 * Return: 0 Exit.
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int num1;
		int num2;
		int result;
		int (*f)(int, int);

		num1 = atoi((argv[1]));
		num2 = atoi((argv[3]));

		f = get_op_func(argv[2]);

		result = (*f)(num1, num2);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
