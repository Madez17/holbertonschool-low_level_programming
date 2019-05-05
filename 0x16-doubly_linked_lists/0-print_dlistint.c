#include "lists.h"

/**
 * print_dlistint - Function print n elemnts
 *
 * @h: pointer to header nod@h: pointer to header nodee
 * Return: nAux - iter nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *nAux = h;
	size_t iter = 0;

	while (nAux != NULL)
	{
		printf("%d\n", nAux->n);
		nAux = nAux->next;
		iter++;
	}
	return (iter);
}
