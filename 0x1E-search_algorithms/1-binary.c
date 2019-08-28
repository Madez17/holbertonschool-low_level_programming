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
	int left = 0, aux, iter, right;

	right = --size;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		aux = (left + right) / 2;
		printf("Searching in array:");
		for (iter = left; iter <= right; iter++)
		{
			if (iter == right)
				printf(" %d\n", iter);
			else
				printf(" %d,", iter);
		}
		if (array[aux] < value)
		{
			left = aux + 1;
		}
		else if (array[aux] > value)
			right = aux - 1;
		else
			return (aux);
	}
	return (-1);
}
