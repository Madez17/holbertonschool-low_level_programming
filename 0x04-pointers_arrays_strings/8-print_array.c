#include "holberton.h"
#include <stdio.h>

/**
* print_array - Function that reverse a string
*
* @str: String Holberton
*
*/
void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont <= n; cont++)
	{
			printf("%d", *(a + cont));
			if (cont < n)
				printf(", ");
	}
	printf("\n");	
}
