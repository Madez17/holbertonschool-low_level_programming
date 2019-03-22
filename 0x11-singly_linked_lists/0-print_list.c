#include "lists.h"

/**
 * print_list - print structure
 *
 * @h: pointer to node(structure)
 *
 * Return: cont
 */

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str != NULL)
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] %p\n", h->str);
		}
		cont++;
	}
	return (cont);

}
