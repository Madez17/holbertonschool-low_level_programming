#include "search_algos.h"

/**
 * binary_search - Function that searches for a value
 *
 * @array: pointer to the first element
 * @size: size of array
 * @value: value
 *
 * Return: -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, aux, iter;

	size--;

	if (array == NULL)
		return (-1);

	while (left <= size)
	{
		aux = (left + size) / 2;
		printf("Search in array:");
		for (iter = left; iter <= size; iter++)
		{
			if (iter == size)
				printf(" %d\n", (int)iter);
			else
				printf(" %d,", (int)iter);
		}
		if (array[aux] < value)
		{
			left = aux + 1;
		}
		else if (array[aux] > value)
			size = aux - 1;
		else
			return (aux);

	}
	return (-1);
}
