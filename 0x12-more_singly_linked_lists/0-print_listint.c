#include "lists.h"

/**
 * print_listint - Print Elements
 *
 * @h: Pointer to structure
 *
 * Return: Number of nodos
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
