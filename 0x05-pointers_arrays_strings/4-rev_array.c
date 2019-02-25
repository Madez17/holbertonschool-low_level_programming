#include "holberton.h"
#include <stdio.h>
/**
  * reverse_array- chage posicion elements into array.
  *
  * @a: Array elements
  *
  * @n: Lenght array
  *
  */
void reverse_array(int *a, int n)
{
	int cont;
	int lenght;
	int save;
	int medio;

	lenght = n - 1;
	medio = n / 2;

	for (cont = 0; cont < medio; cont++)
	{
		save = *(a + lenght);
		*(a + lenght) = *(a + cont);
		*(a + cont) = save;
		lenght--;
	}
}
