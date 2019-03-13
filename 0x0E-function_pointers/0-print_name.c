#include "function_pointers.h"

/**
 * print_name - Function
 *
 * @name: Name parameter
 * @f: Pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(*f)(name);
	}
}
