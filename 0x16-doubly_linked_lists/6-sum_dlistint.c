#include "lists.h"

/**
 * sum_dlistint - Function that sum all nodes
 *
 * @head: Pointer to the initial node
 * Return: Sum that nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux = head;

	while (aux != NULL)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
