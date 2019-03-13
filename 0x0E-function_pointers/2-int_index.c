#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: array elements
 * @size: Lenght string
 * @cmp: Pointer to function
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (cmp != NULL && array != NULL)
	{
		int cont;
		int save;

		for (cont = 0; cont < size; cont++)
		{
			save = (*cmp)(array[cont]);

			if (save != 0)
			{
				return (cont);
			}
		}
	}
	return (-1);
}
