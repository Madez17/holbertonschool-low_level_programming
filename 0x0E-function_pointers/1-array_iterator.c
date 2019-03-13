#include "function_pointers.h"

/**
 * array_iterator - function
 *
 * @array: Array.
 * @size: lenght string.
 * @action: pointer to a function.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL && array != NULL)
	{
		unsigned int cont;

		for (cont = 0; cont < size; cont++)
		{
			(*action)(array[cont]);
		}
	}
}
