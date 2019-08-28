#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of integers
 *
 * @array: pointer to the first element
 * @size: size of array  
 * @value: value
 *
 * Return: success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t iter;

	for (iter = 0; iter < size; iter++)
	{
		if (array == NULL)
			return -1;

		printf("Value checked array[%d] = [%d]\n", (int)iter, array[iter]);
		
		if (array[iter] == value)
			return ((int)iter);
	}
	return -1;
		
}
