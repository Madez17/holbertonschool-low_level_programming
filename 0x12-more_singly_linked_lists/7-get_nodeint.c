#include "lists.h"

/**
 * get_nodeint_at_index - Function search index and return value.
 *
 * @head: pointer to structure
 * @index: Number of position
 *
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int iter = 0;

	aux = head;

	while (aux != NULL)
	{
		if (iter == index)
		{
			return (aux);
		}
		iter++;
		aux = aux->next;
	}
	return (NULL);
}
