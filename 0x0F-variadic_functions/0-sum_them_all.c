#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Suma n parameters tha pass
 *
 * @n: Cantidad parameters.
 *
 * Return: suma.
 */
int sum_them_all(const unsigned int n, ...)
{
	int suma = 0;
	unsigned int cont;
	va_list why;

	if (n == 0)
	{
		return (0);
	}

	va_start(why, n);
	for (cont = 0; cont < n; cont++)
	{
		suma = va_arg(why, int) + suma;
	}
	va_end(why);
	return (suma);
}
