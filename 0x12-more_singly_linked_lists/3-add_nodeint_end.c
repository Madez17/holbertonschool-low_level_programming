#include "lists.h"

/**
 * add_nodeint_end -
 *
 * Return: 
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *aux;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	aux = new_node;
	*head = new_node;

	aux->next = new_node;
	aux = aux->next;
	new_node->next = NULL;

	if (*head == NULL)
		return (NULL);

	return (*head);
}
