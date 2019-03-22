#include "lists.h"

/**
 * list_len - Structure
 *
 * @h: pointer to Node
 *
 * Return: cont
 */

size_t list_len(const list_t *h)
{
	size_t cont = 0;

	for (; h != NULL; h = h->next)
	{
		cont++;
	}
	return (cont);
}
