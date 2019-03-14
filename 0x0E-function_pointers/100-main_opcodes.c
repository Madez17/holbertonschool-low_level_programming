#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print errors
 *
 * @argc: Cantidad de argumentos
 * @argv: Argumentos
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
