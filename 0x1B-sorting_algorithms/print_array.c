#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}


/**
* swap - function that swap the values in an array
* @prev: the first argument
* @next: the second argument
**/

void swap(int *prev, int *next)
{
        int aux;

        aux = *prev;
        *prev = *next;
        *next = aux;

}
