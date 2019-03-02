#include <stdio.h>
/**
 * main - my function
 * @argc: Numero argumentos
 * @argv: array unidimensional
 * Return: 0
 */
int main (int argc, char ** argv) 
{
	(void)argc;
	printf("%s\n", *argv);
	return(0);
}
