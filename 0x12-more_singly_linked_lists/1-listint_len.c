#include "lists.h"

/**
 * listint_len - Pirnt number of nodes
 *
 * @h: pointer to structure
 *
 * Return: iter
 */
size_t listint_len(const listint_t *h)
{
	size_t iter = 0;

	while (h != NULL)
	{
		h = h->next;
		iter++;
	}
	return (iter);
}
