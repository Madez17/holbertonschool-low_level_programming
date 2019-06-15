#include "sort.h"

/**
 *
 *
 *
 **/

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (array[min] != array[i])
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
