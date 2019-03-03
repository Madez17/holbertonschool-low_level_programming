#include <stdio.h>
#include <ctype.h>
#include "stdlib.h"
/**
 * main - my function
 *
 * @argc: Numero argumentos
 * @argv: array unidimensional
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int cont;
	int suma = 0;

	for (cont = 1; cont < argc; cont++)
	{
		if (isdigit(*argv[cont]) != 0)
		{
			suma = suma + atoi(argv[cont]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", suma);
	return (0);
}
