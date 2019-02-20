#include "holberton.h"
#include <stdio.h>

/**
  * rev_string - Function that reverse a string
  *
  * @s: String Holberton
  *
 */
void rev_string(char *s)
{
	int der = 0; /*Posicion inicial 0(en este caso) de mi string 'H'*/
	int izq; /*Posicion final 8(en este caso) de mi string 'n'*/
	int aux; /*Variable externa me guarda el valor que va a ser cambiado*/

	for (izq = 0; *(s + izq) != '\0'; izq++)
	{
	}
	izq--;
	while (der < izq)
	{
		aux = *(s + der);
		*(s + der) = *(s + izq);
		*(s + izq) = aux;
		der++;
		izq--;
	}
}
