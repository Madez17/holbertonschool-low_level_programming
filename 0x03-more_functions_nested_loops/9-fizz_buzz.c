#include "holberton.h"
#include <stdio.h>

/**
* main - print numbers from 1 to 100 buzzing in multiples of three and five
*
* Return: Always 0.
*/

int main(void)
{
	int number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", number);
			putchar('\n');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
