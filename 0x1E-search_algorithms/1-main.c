#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 20, 30, 45
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 0, binary_search(array, size, 0));
    printf("Found %d at index: %d\n\n", 15, binary_search(array, size, 15));
    printf("Found %d at index: %d\n", 999, binary_search(NULL, size, 999));
    
    printf("Found %d at index: %d\n\n", 1, binary_search(array, size, 1));
    printf("Found %d at index: %d\n\n", 30, binary_search(array, size, 30));
    printf("Found %d at index: %d\n\n", 8, binary_search(array, size, 8));

    return (EXIT_SUCCESS);
}
