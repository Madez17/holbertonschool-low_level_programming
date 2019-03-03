#include <stdio.h>
#include "stdlib.h"
/**
 * main - my function
 *
 * @argc: Numero argumentos
 *
 * @argv: array unidimensional
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int argumento1;
	int argumento2;
	int result;

	if (argc == 3)
	{
		argumento1 = atoi(argv[1]);
		argumento2 = atoi(argv[2]);
		result = argumento1 * argumento2;
		printf("%d", result);
		printf("\n");
		return (0);
	}
	else
	{
		printf("Error \n");
		return (1);
	}
}
