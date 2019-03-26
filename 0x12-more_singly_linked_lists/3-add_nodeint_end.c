#include "lists.h"

/**
 * add_nodeint_end - Function add new node at the end.
 *
 * @head: pointer to pointer
 * @n: vale int
 *
 * Return: head.
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
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		aux = *head;

		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new_node;
	}
	return (*head);
}
