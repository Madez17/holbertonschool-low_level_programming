#include "variadic_functions.h"

/**
 * print_all - Function
 *
 * @format: Format List
 */
void print_all(const char * const format, ...)
{
	va_list anything;
	int cont = 0;
	char *p;

	va_start(anything, format);

	while (format[cont] && format)
	{
		switch (format[cont])
		{
			case 'c':
				printf("%c", va_arg(anything, int));
				break;
			case 'i':
				printf("%i", va_arg(anything, int));
				break;
			case 's':
				p = va_arg(anything, char*);
				if (p == NULL)
				{
					printf("%p", p);
					break;
				}
				printf("%s", p);
				break;
			case 'f':
				printf("%f", va_arg(anything, double));
				break;
			default:
				cont++;
				continue;
		}
		if (format[cont + 1] != '\0')
			printf(", ");
		cont++;
	}
	printf("\n");
	va_end(anything);
}
