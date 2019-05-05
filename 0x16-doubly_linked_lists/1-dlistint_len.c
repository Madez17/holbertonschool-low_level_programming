#include "lists.h"

/**
 * dlistint_len - Function iter number nodes
 *
 * @h: pointer head to the first node
 * Return: iter - elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nAux = h;
	size_t iter = 0;

	while (nAux != NULL)
	{
		nAux = nAux->next;
		iter++;
	}
	return (iter);

}
