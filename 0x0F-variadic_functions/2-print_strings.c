#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 *
 * @separator: comma and space.
 * @n: Numbers parameters.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int cont;
	char *p;

	va_start(string, n);

	if (separator != NULL)
	{
		for (cont = 0; cont < n; cont++)
		{
			p = va_arg(string, char *);

			if (p == NULL)
			{
				printf("%p", p);
			}

			if (p != NULL)
			{
				printf("%s", p);
			}
			if (cont != n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
}
