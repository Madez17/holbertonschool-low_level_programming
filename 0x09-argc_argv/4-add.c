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
	int iteravalorarg;
	int suma = 0;


	for (cont = 1; cont < argc; cont++)
	{
		for (iteravalorarg = 0; argv[cont][iteravalorarg]; iteravalorarg++)
		{
			if (isdigit(argv[cont][iteravalorarg]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		if (isdigit(*argv[cont]) != 0)
		{
			suma = suma + atoi(argv[cont]);
		}
	}
	printf("%d\n", suma);
	return (0);
}
