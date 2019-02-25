#include "holberton.h"
#include <stdio.h>
/**
 * leet- Replace letters for numbrs
 *
 * @str: Array of elements.
 *
 * Return: Replace string.
 */
char *leet(char *str)
{
	int cont, cont1;
	char lowercase[] = "aeotl";
	char uppercase[] = "AEOTL";
	char nums[] = "43071";

	for (cont = 0; *(str + cont) != '\0'; cont++)
	{
		for (cont1 = 0; lowercase[cont1] && uppercase[cont1]; cont1++)
		{
			if (*(str + cont) == lowercase[cont1] || *(str + cont) == uppercase[cont1])
			{
				*(str + cont) = nums[cont1];
			}
		}
	}
	return (str);
}
