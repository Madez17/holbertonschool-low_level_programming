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

	if (separator != NULL)
	{
		va_start(whyagain, n);

		for (cont = 0; cont < n - 1; cont++)
		{
			printf("%d%s", va_arg(whyagain, int), separator);
		}
		printf("%d\n", va_arg(whyagain, int));
		va_end(whyagain);
	}
}
