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

/**
 * insert_nodeint_at_index - Insert new node
 *
 * @head: pointer to pointer
 * @idx: number index(poscition)
 * @n: value.
 *
 * Return: address new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux;
	listint_t *new_node;

	if (*head == NULL)
		return (NULL);

	aux = get_nodeint_at_index(*head, idx - 1);
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = aux->next;
	aux->next = new_node;
	return (new_node);
}
