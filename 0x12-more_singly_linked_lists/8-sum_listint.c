#include "lists.h"

/**
 * sum_listint - Function sum others nodes
 *
 * @head: pointer to structure.
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *aux;

	if (head == NULL)
		return (0);

	aux = head;

	while (aux != NULL)
	{

		sum = aux->n + sum;
		aux = aux->next;
	}
	return (sum);
}
