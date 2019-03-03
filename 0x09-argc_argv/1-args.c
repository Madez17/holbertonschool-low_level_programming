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
	int i;
	(void)argv;

	for (i = 0; i < argc; ++i)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
