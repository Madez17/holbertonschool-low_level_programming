#include <stdio.h>
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
	int cont;

	for (cont = 0; cont < argc; cont++)
	{
		printf("%s\n", argv[cont]);
	}
	return (0);
}
