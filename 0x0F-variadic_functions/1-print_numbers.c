#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Function
 *
 * @separator: Char parameters
 * @n: numbers parameters
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int cont;
	va_list whyagain;

	va_start(whyagain, n);

	for (cont = 0; cont < n; cont++)
	{
		printf("%d", va_arg(whyagain, int));

		if (cont < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(whyagain);
}
