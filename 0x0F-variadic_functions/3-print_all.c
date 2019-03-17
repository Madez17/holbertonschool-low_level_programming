#include "variadic_functions.h"

/**
 * print_all -
 *
 * Return: 
 */
void print_all(const char * const format, ...)
{
	va_list anything;
	int cont = 0;
	int cont2 = 0;

	va_start(anything, format);

	while (format[cont2])
		cont2++;

	while (format[cont] && format)
	{
		switch (format[cont])
		{
			case 'c': printf("%c", va_arg(anything, int));
			break;
			case 'i': printf("%i", va_arg(anything, int));
			break;
			case 's': printf("%s", va_arg(anything, char*));
			break;
			case 'f': printf("%f", va_arg(anything, double));
			break;
			case "null": printf("%p", va_arg(anything, char *));
			break;
			default: cont++;
			continue;
		}
		if (cont < cont2 - 1)
		{
			printf(", ");
		}
		cont++;
	}
	printf("\n");
}
